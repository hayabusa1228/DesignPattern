#include "BookShelfIterator.h"

bool BookShelfIterator::hasNext(){
  if(index < bookshelf->getLength()){
    return true;
  }else{
    return false;
  }
}

Book BookShelfIterator::next(void){
    Book book = bookshelf->getBookAt(index);
    index++;
    return book;
}
