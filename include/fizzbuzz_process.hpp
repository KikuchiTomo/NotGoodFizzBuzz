#ifndef __FIZZ_BUZZ_PROCESS__
#define __FIZZ_BUZZ_PROCESS__

#include <functional>
#include "fizz.hpp"
#include "buzz.hpp"

namespace FizzBuzz{
  class Process{
    FizzBuzz::Fizz* fizz_;
    FizzBuzz::Buzz* buzz_;
  public:
    Process();
    ~Process();
    std::function<void()> process(int index);
  };
}

#endif
