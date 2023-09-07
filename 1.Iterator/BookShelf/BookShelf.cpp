#include "BookShelf.h"

Book BookShelf::getBookAt(int index){
  return books.at(index);
}

void BookShelf::appendBook(const Book& book){
  books.push_back(book);
  last++;
}

int BookShelf::getLength(){
  return (int)books.size();
}

Iterator* BookShelf::iterator(){
  Iterator *p = new BookShelfIterator(this);
  return p;
}