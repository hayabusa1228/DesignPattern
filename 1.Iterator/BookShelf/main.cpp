#include "BookShelfIterator.h"
#include "BookShelf.h"
#include <iostream>
#include <string>

int main(){
  BookShelf bookshelf =  BookShelf();
  Book book1(std::string("Hero1"));
  Book book2(std::string("Hero2"));
  Book book3(std::string("Hero3"));
  Book book4(std::string("Hero4"));



  bookshelf.appendBook(book1);
  bookshelf.appendBook(book2);
  bookshelf.appendBook(book3);
  bookshelf.appendBook(book4);
  Iterator* it = bookshelf.iterator();
  while(it->hasNext()){
    Book book = it->next();
    std::cout  << book.getName() << std::endl;
  } 

  delete &bookshelf;
}