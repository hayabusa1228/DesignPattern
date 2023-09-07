#include <map>
#include <string>
#include <iostream>

#include "Product.hpp"

class Manager{
  private:
    std::map<std::string,Product*> showCase;
  public:
   void Register(std::string name,Product *p){
    showCase[name] = p;
   }
   Product* create(std::string name){
    Product* p;
    if(showCase.count(name)){
      p = showCase[name];
    }else{
      std::cout <<  name << "は登録されていません" << std::endl;
    }
    return p;
   }
};