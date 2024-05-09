#ifndef __PRINTER_HPP__
#define __PRINTER_HPP__

#include <cstdio>
#include <cstring>

namespace FizzBuzz{
  class StringPrinter{
  public:
    StringPrinter();
    ~StringPrinter();
    void print(FILE* fp, const char* str);
  };
}

#endif
