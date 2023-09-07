#include <iostream>
#include <string>
#include "DisplayImp.hpp"

class StringDisplayImp: public DisplayImp
{
private:
  std::string str;
  int width;
public:
  StringDisplayImp(std::string str): str(str),width(str.length()){};
  ~StringDisplayImp();
  void open(){
    printLine();
  }
  void print(){
    std::cout << "|" << str << "|" << std::endl; 
  }
  void close(){
    printLine();
  }

  void printLine(){
    std::cout << "+";
    for(int i=0;i<width;i++) std::cout << "-";
    std::cout << "+" << std::endl;
  }
};

