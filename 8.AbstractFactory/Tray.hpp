#pragma once
#include <vector>
#include "Item.hpp"

class Tray: public Item{
  protected:
    std::vector<Item*> tray;
  public:
    Tray(std::string cap): Item(cap){}
    ~Tray(){}
    void add(Item* item){
      tray.push_back(item);
    }
};