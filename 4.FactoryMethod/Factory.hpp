#pragma once
#include <string>
#include "Product.hpp"

class Factory{
  public:
    ~Factory(){}
    virtual Product* createProduct(std::string owner) = 0;
    virtual void registerProduct(Product* Product) = 0;
    Product* create(std::string owner){
      Product* p = createProduct(owner);
      registerProduct(p);
      return p;
    }
};