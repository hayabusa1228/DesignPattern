#include <iostream>

//コンストラクタをstaticメンバ関数で1度だけ呼び出すことで
//インスタンスの数を限定することを担保
class Singleton{
  private:
    static Singleton* singleton;
    Singleton(){
      std::cout << "インスタンスを作成しました" << std::endl;
      id++;
    }
    public:
      int id = 0;
      static Singleton getInstance(){
        if(singleton == nullptr){
          singleton = new Singleton();
        }
        return *singleton;
      }

};

Singleton* Singleton::singleton = nullptr;
