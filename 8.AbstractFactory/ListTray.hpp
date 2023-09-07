#pragma once
#include "Tray.hpp"

class ListTray: public Tray{
  public:
    ListTray(std::string cap):Tray(cap){}
    std::string makeHTML(){
        std::string buffer;
        buffer += "<li>\n";
        buffer += caption + "\n";
        buffer += "<ul>\n";
        for(int i=0;i<(int)tray.size();i++){
          buffer += tray.at(i)->makeHTML();
        }
        buffer += "</ul>\n";
        buffer += "</li>\n";
        return buffer;
      }

};