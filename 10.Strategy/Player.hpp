#include <string>
#include "Strategy.hpp"
class Player{
  private:
    std::string name;
    Strategy* strategy;
    int wincount;
    int losecount;
    int gamecount;
  public:
    Player(std::string name, Strategy* strategy): name(name),strategy(strategy){}
    Hand* nextHand(){
      return strategy->nextHand();
    }

    void win(){
      strategy->study(true);
      wincount++;
      gamecount++;
    }

    void lose(){
      strategy->study(false);
      losecount++;
      gamecount++;
    }

    void even(){
      gamecount++;
    }
    

        
};