#pragma once
#include "Link.hpp"

class ListLink: public Link{
  public:
    ListLink(std::string cap, std::string url): Link(cap,url){}
    std::string makeHTML(){
      return "<li><a href='" + url + "'>" + caption + "</a></li>\n";
    }
};