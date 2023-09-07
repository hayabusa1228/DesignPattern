#pragma once
#include "BookShelf.h"

class BookShelf;

class BookShelfIterator : public Iterator
{
private:
  // ポインタにすれば、相互参照時にサイズが分からなくてもよい
  BookShelf *bookshelf;
  unsigned int index;
public:
  BookShelfIterator(BookShelf *Bookshelf){
    this->bookshelf = Bookshelf;
    this->index = 0;
  }

  ~BookShelfIterator(){};
  bool hasNext(void);
  Book next(void);
};

