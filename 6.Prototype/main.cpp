#include "Manager.hpp"
#include "MessageBox.hpp"

int main(){
  Manager manager;
  Product* mBox1 = new MessageBox('*');
  Product* mBox2 = new MessageBox('/');
  manager.Register("warning box",mBox1);
  manager.Register("slash box",mBox2);
  Product* p1 = manager.create("warning box");
  p1->use("Hello World!");
  Product* p2 = manager.create("slash box");
  p2->use("Hello World!");
}