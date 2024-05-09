#ifndef __FIZZ_BUZZ_THREAD__
#define __FIZZ_BUZZ_THREAD__

#include <thread>
#include <vector>
#include <functional>
#include <cstring>
#include <cstdio>

namespace FizzBuzz{
  class Thread{
  private:
    std::function<void(void)>* lambdas_;
    std::vector<std::thread> threads_;
    int upper_num_;
  public:
    Thread(int upper_num);
    ~Thread();
    void prepare();
    void run();    
  };
}

#endif
