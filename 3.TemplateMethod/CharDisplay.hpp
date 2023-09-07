#pragma once
#include <iostream>
#include "AbstractDisplay.hpp"
class CharDisplay: public AbstractDisplay{
  private:
    char ch;
  public:
  CharDisplay(char ch): ch(ch){}
  void open(){ std::cout << "<<";}
  void print(){ std::cout << ch;}
  void close(){  std::cout << ">>" << std::endl; }  
};
