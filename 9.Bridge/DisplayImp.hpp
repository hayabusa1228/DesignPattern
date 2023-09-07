#pragma once
class DisplayImp{
  public:
    virtual void open() = 0;
    virtual void print() = 0;
    virtual void close() = 0;
};