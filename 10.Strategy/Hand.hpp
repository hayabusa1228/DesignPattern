#pragma once
#include <vector>
#include <string>

class Hand{
  public:
    static int HANDVALUE_GUU;
    static int HANDVALUE_CHO;
    static int HANDVALUE_PAA;
    static std::vector<Hand*> hands;
  private:
    static std::vector<std::string> names;
    Hand(int value):handvalue(value){}
    int handvalue;
    int fight(Hand* h){
      if(this == h){
        return 0;
      }else if(this->handvalue+1%3 == h->handvalue){
        return 1;
      }else{
        return -1;
      }

    }
  public:
    static Hand* getHand(int value){
      return hands.at(value);
    }
     bool isStrongerThan(Hand* h){
      return fight(h) == 1;
     }
     bool isWeakerThan(Hand* h){
      return fight(h) == -1;
     }
     std::string ToString(int value){
       return names.at(value);
     }
};

int Hand::HANDVALUE_GUU = 0;
int Hand::HANDVALUE_CHO = 1;
int Hand::HANDVALUE_PAA = 2;
std::vector<Hand*> Hand::hands = {
  new Hand(Hand::HANDVALUE_GUU),
  new Hand(Hand::HANDVALUE_CHO),
  new Hand(Hand::HANDVALUE_PAA),
};
std::vector<std::string> Hand::names = {"グー","チョキ","パー"};


