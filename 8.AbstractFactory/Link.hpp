#pragma once
#include "Item.hpp"

class Link: public Item {
  protected:
    std::string url;
  public:
    Link(std::string cap,std::string url): Item(cap),url(url){}
    ~Link(){}
};