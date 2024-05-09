#include "buzz.hpp"
#include "string_printer.hpp"

FizzBuzz::Buzz::Buzz(){
  
}

FizzBuzz::Buzz::~Buzz(){

}

std::function<void()> FizzBuzz::Buzz::buzz(){
  return [](){
    FizzBuzz::StringPrinter *printer = new FizzBuzz::StringPrinter();
    printer->print(stdout, BUZZ_STRING);
    delete printer;
  };  
}
