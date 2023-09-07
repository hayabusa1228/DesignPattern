#include "PrintBanner.h"

// クラスによるAdopterPattern
//Bannerを覆い隠して、Printの機能をPrintbannerで提供
int main(){
  PrintBanner p("Hello");
  p.printStrong();
  p.printWeek();
}