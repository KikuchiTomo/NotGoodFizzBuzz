#ifndef __FIZZ_HPP__
#define __FIZZ_HPP__

#include <cstdlib>
#include <cstring>
#include <functional>

#define FIZZ_NUMBER (3)
#define FIZZ_STRING "Fizz"

namespace FizzBuzz{
  class Fizz{  
  public:
    Fizz();
    ~Fizz();
    std::function<void()> fizz();
  };
}

#endif
