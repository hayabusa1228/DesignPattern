#include "DisplayImp.hpp"

class Display{
  private:
    DisplayImp* imp;
  public:
    Display(DisplayImp* imp):imp(imp){}
    void open(){
      imp->open();
    }  
    void print(){
      imp->print();
    }
    void close(){
      imp->close();
    }
    void display(){
      open();
      print();
      close();
    }
};