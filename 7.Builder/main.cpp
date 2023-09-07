#include "Director.hpp"
#include "TextBuilder.hpp"

int main(){
  TextBuilder textbuilder;
  Director director(&textbuilder);
  director.construct();
  std::string result = textbuilder.getResult();
  std::cout << result << std::endl;
}