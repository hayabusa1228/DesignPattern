#include <iostream>
#include "Singleton.hpp"

using namespace std;

int main(){
  cout << "Start" << endl;
  Singleton s1 = Singleton::getInstance();
  Singleton s2 = Singleton::getInstance();

  if(s1.id ==s2.id){
    cout << "s1とs2は同じものです" << endl;
  }else{
    cout << "s1とs2は違うものです" << endl;
  }

 cout << "End" << endl;

}