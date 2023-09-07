#pragma once
#include "Book.h"

class Iterator {
  public:
    // 仮想destractor
    virtual ~Iterator(){}
    // check whether this has a next elem
    virtual bool hasNext() = 0;
    // get a next elem
    virtual Book next() = 0;
};