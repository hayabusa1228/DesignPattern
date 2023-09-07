#pragma once
#include <string>
#include "Link.hpp"
#include "Page.hpp"
#include "Tray.hpp"

class Factory{
  public:
    ~Factory(){}
    virtual Link* createLink(std::string cap,std::string url) = 0;
    virtual Tray* createTray(std::string cap) = 0;
    virtual Page* createPage(std::string title, std::string auth) = 0;
};