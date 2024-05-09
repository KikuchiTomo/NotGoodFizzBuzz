#include "string_printer.hpp"

FizzBuzz::StringPrinter::StringPrinter(){
}

FizzBuzz::StringPrinter::~StringPrinter(){
}

void FizzBuzz::StringPrinter::print(FILE* fp, const char* str){
  std::fprintf(fp, str);
}
