#pragma once
#include <iostream>
#include "Factory.hpp"
#include "ListLink.hpp"
#include "ListTray.hpp"
#include "ListPage.hpp"

class ListFactory: public Factory {
  public:
     Link* createLink(std::string cap, std::string url){
        return new ListLink(cap,url);
     }

     Tray* createTray(std::string cap){
        return new ListTray(cap);
     }

     Page* createPage(std::string title, std::string author){
        return new ListPage(title,author);
     }
 
};