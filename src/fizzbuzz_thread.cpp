#include "fizzbuzz_thread.hpp"
#include "fizzbuzz_process.hpp"

FizzBuzz::Thread::Thread(int upper_num){
  upper_num_ = upper_num + 1;
  lambdas_ = (std::function<void(void)>*) std::malloc(sizeof(std::function<void(void)>) * (upper_num + 10));
}

FizzBuzz::Thread::~Thread(){
  std::free(lambdas_);
}

void FizzBuzz::Thread::prepare(){
  int num = upper_num_;
  auto process = std::make_shared<FizzBuzz::Process>();
    
  for(int i=0; i<num; i++){
    auto proc = [this, process](int index){
      lambdas_[index] = process->process(index);
    };
    threads_.push_back(std::thread(proc, i));
  }

  for(int i=0; i<num; i++){
    threads_[i].join();
  } 
}

void FizzBuzz::Thread::run(){
  int num = upper_num_;
  for(int i=1; i<num; i++){
    printf("%d ", i);
    lambdas_[i]();
    printf("\n");
  }
}
