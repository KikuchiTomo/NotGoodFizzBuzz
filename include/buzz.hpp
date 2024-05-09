#ifndef __BUZZ_HPP__
#define __BUZZ_HPP__

#include <cstdlib>
#include <cstring>
#include <functional>

#define BUZZ_NUMBER (5)
#define BUZZ_STRING "Buzz"

namespace FizzBuzz{
  class Buzz{
  public:
    Buzz();
    ~Buzz();
    std::function<void()> buzz();
  };
}

#endif
