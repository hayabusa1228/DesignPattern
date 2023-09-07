#include <iostream>
#include <fstream>
#include "Builder.hpp"

class TextBuilder: public Builder{
  private:
    std::string filename;
    std::string buffer;
  public:
    void makeTitle(std::string title){
      filename = title + ".txt";
      buffer+="=========================\n";
      buffer+= ("「" + title + "」\n");
      buffer+= "\n";
    }
    void makeString(std::string str){
      buffer+= ("■" + str + "\n");
      buffer+="\n";
    }
    void makeItems(std::vector<std::string> items){
      for(int i=0;i<(int)items.size();i++){
        buffer += ("・" + items.at(i) + "\n");
      }
      buffer += "\n";
    }
    void close(){
      buffer+="=========================\n";
    }
    
    std::string getResult(){
      std::ofstream writing_file;
      writing_file.open(filename,std::ios::out);
      writing_file << buffer << std::endl;
      writing_file.close();
      return buffer;
    }
};