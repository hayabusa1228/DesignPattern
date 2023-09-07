#include <string>
#include <iostream>
class Banner{
  public:
     Banner(std::string str):str(str){}
     void showWithParen(){
      std::cout << "(" << str << ")" << std::endl;
     }
     void showWithAstar(){
      std::cout << "*" << str << "*" << std::endl;
     }   
  private:
     std::string str;
};
