#include "Display.hpp"

class CountDisplay: public Display{
  public:
    CountDisplay(DisplayImp* imp): Display(imp){}
    void multiDisplay(int times){
      open();
      for(int i=0;i<times;i++){
        print();
      }
      close();
    }
};