#include <iostream>
#include "Player.hpp"
#include "WinningStrategy.hpp"

int main(){
  Player p1("Hayato", new WinningStrategy());
  Player p2("Tsubasa", new WinningStrategy());
  Hand* nextHand1 = p1.nextHand();
  Hand* nextHand2 = p2.nextHand();
  if(nextHand1->isStrongerThan(nextHand2)){
    std::cout << "p1 win!" << std::endl;
    p1.win();
    p2.lose();
  }else if(nextHand2->isStrongerThan(nextHand1)){
    std::cout << "p2 win!" << std::endl;
    p2.win();
    p1.lose();
  }else{
    std::cout << "even!!" << std::endl; 
    p1.even();
    p2.even();
  }


}