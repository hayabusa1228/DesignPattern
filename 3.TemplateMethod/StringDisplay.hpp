#pragma once
#include <iostream>
#include <string>
#include "AbstractDisplay.hpp"

class StringDisplay: public AbstractDisplay{
  private:
    std::string str;
    int width;
  public:
    StringDisplay(std::string str):str(str),width(str.length()){}
    void open(){
      printLine();
    }
    void print(){
      std::cout << "|" << str << "|" << std::endl;
    }
    void close(){
      printLine();
    }
  private:
    void printLine(){
      std::cout << "+";
      for(int i=0;i<width;i++){
        std::cout << "-";
      }
      std::cout << "+" << std::endl;
    }


};