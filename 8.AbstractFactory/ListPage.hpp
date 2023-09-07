#pragma once
#include "Page.hpp"

class ListPage: public Page{
  public:
    ListPage(std::string title, std::string auth): Page(title,auth){}
    std::string makeHTML(){
      std::string buffer;
      buffer += "<html><head><title>" + title + "</title></head>\n";
      buffer += "<body>\n";
      buffer += "<h1>" + title + "</h1>\n";
      buffer += "<ul>\n";
      for(int i=0;i<(int)content.size();i++){
        buffer += content.at(i)->makeHTML();
      }
      buffer += "</ul>\n";
      buffer += "<hr><address>" + author + "</adress>";
      buffer += "</body></html>\n";
      return buffer;
    }
};