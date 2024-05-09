#include "fizzbuzz_process.hpp"

FizzBuzz::Process::Process(){
   fizz_ = new FizzBuzz::Fizz();
   buzz_ = new FizzBuzz::Buzz();    
}

FizzBuzz::Process::~Process(){
  delete fizz_;
  delete buzz_;
}

std::function<void(void)> FizzBuzz::Process::process(int index){
  if((index % FIZZ_NUMBER == 0) && (index % BUZZ_NUMBER == 0)){
    return [this](){
      (fizz_->fizz())();      
      (buzz_->buzz())();
    };
  }else if(index % FIZZ_NUMBER == 0){
    return fizz_->fizz();    
  }else if(index % BUZZ_NUMBER == 0){
    return buzz_->buzz();
  }

  return [](){};
}

