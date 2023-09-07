#include "Print.h"
#include "Banner.h"

class PrintBanner: public Print, public Banner{
  public:
     PrintBanner(std::string str): Banner(str){}
     void printWeek(){
      showWithParen();
     }
     void printStrong(){
      showWithAstar();
     }
};
