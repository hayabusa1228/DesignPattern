#pragma once
class AbstractDisplay{
  public:
    ~AbstractDisplay(){}
    virtual void open() = 0;
    virtual void print() = 0;
    virtual void close() = 0;
    //処理の枠組み、内容は決まっていない
    void display(){
      open();
      for(int i=0;i<5;i++){
        print();
      }
      close();
    }
};
