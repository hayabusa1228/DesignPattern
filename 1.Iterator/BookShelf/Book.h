#pragma once
#include <string>

class Book {
  private:
   std::string name;
  public:
    Book(const std::string& new_name);
    ~Book(){};
    
    std::string getName();
};

