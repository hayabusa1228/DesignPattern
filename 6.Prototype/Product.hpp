#pragma once
#include <string>
class Product{
  public:
    ~Product(){}
    virtual void use(std::string str) = 0;
};
