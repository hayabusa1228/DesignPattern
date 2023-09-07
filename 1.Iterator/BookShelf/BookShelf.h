#pragma once
#include <vector>
#include "Book.h"
#include "Iterator.h"
#include "Aggregate.h"
#include "BookShelfIterator.h"


class BookShelf: public Aggregate{
private:
  std::vector<Book> books;
  unsigned int last = 0;

public:
  BookShelf(){};
  ~BookShelf(){};
  Book getBookAt(int index);
  void appendBook(const Book& book);
  int getLength(void);
  Iterator* iterator(void);
};

