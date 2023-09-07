#include <random>
#include "Hand.hpp"
#include "Strategy.hpp"
class WinningStrategy: public Strategy
{
private:
  std::random_device rd{};
  bool won = false;
  Hand* prevHand;
public:
  ~WinningStrategy();
  Hand* nextHand(){
    if(!won){
      prevHand = Hand::getHand(rd()%3);
    }
    return prevHand;
  }
  void study(bool win){
    won = win;
  }
};

