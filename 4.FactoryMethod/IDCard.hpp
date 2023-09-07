#pragma once
#include <iostream>
#include <string>

#include "Product.hpp"
class IDCard: public Product{
  private:
    std::string owner;
  public:
    IDCard(std::string owner):owner(owner){
      std::cout << owner << "のカードを作ります" << std::endl; 
    }
    void use(){
      std::cout << owner << "のカードを使います" << std::endl;
    }
    std::string getOwner(){
      return owner;
    }
};