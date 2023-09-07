// template method pattern 
// = 抽象クラスで処理の枠組みを決めて、サブクラスでその具体的な内容を決める

#include "StringDisplay.hpp"
#include "CharDisplay.hpp"

int main(){
  //StringDisplay CharDisplayが隠されている
  AbstractDisplay* char_display = new CharDisplay('H');
  AbstractDisplay* string_display = new StringDisplay("Hello World!");
  char_display->display();
  string_display->display();
}