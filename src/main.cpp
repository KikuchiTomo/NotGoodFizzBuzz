#include "fizzbuzz_thread.hpp"
#include <cstdio>

int main(void){
  auto fizzbuzz = new FizzBuzz::Thread(50);
  fizzbuzz->prepare();
  fizzbuzz->run();
  delete fizzbuzz;
  return 0;
}
