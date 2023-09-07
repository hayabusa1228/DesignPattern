#include <string>
#include <iostream>
#include "Product.hpp"

class MessageBox: public Product{
  private:
    char decochar;
  public:
    MessageBox(char ch):decochar(ch){}
    void use(std::string str){
      int len = str.length();
      for(int i=0;i<len+4;i++){
          std::cout << decochar;
      }
      std::cout << std::endl;
      std::cout << decochar << " " << str << " " << decochar << std::endl;
      for(int i=0;i<len+4;i++){
          std::cout << decochar;
      }
      std::cout << std::endl;
    }
};