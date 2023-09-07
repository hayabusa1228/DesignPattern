#pragma once
#include <string>
class Item{
  protected:
    std::string caption;
  public:
    Item(std::string cap): caption(cap){}
    ~Item(){}
    virtual std::string makeHTML() = 0;
};