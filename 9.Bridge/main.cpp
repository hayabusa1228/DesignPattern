#include "StringDisplayImp.hpp"
#include "CountDisplay.hpp"

int main(){
  Display* d1 = new Display(new StringDisplayImp("HelloJapan!"));
  CountDisplay* d2 = new CountDisplay(new StringDisplayImp("HelloWorld!"));

  d1->display();
  d2->display();
  d2->multiDisplay(3);
}