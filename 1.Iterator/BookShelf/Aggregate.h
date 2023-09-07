#pragma once
#include "Iterator.h"

// interface
class Aggregate
{
  public:
    virtual Iterator* iterator(void) = 0;
    //仮想デストラクタ
    virtual ~Aggregate(){}
};
