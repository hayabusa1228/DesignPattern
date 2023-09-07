#include <string>
#include "Book.h"


std::string Book::getName(){
  return this->name;
}

Book::Book(const std::string& new_name){
  this->name = new_name;
}