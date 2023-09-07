#pragma once
#include <string>
#include <vector>
#include <fstream>
#include "Item.hpp"

class Page{
  protected:
    std::string title;
    std::string author;
    std::vector<Item*> content;
  public:
    Page(std::string title,std::string auth):title(title),author(auth){}
    ~Page(){}
    void add(Item* item){
     content.push_back(item);
    }
    void output(){
      std::string filename = title + ".html";
      std::ofstream writing_file;
      writing_file.open(filename,std::ios::out);
      writing_file << this->makeHTML() << std::endl;
      writing_file.close();
    }
    virtual std::string makeHTML() = 0;
};