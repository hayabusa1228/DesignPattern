#pragma once
#include <vector>
#include "Builder.hpp"
class Director{
  private:
    Builder* builder;
  public:
  Director(Builder* builder):builder(builder){}
  void construct(){
    builder->makeTitle("Greeting");
    builder->makeString("朝から昼にかけて");
    builder->makeItems({"おはようございます","こんにちは"});
    builder->makeString("夜に");
    builder->makeItems({"こんばんは","おやすみなさい","さようなら"});
    builder->close();
  }
};