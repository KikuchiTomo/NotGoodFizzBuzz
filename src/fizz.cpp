#include "fizz.hpp"
#include "string_printer.hpp"

FizzBuzz::Fizz::Fizz(){
  
}

FizzBuzz::Fizz::~Fizz(){

}

std::function<void()> FizzBuzz::Fizz::fizz(){
  return [](){
    FizzBuzz::StringPrinter *printer = new FizzBuzz::StringPrinter();
    printer->print(stdout, FIZZ_STRING);
    delete printer;
  };
}
