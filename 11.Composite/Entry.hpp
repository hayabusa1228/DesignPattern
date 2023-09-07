#include <string>

class Entry{
  public:
    virtual std::string getName() = 0;
    virtual int getSize() = 0;
    Entry* add(Entry* enrty)
};