#include <vector>
#include <string>
#include "Factory.hpp"
#include "IDCard.hpp"

class IDCardFactory: public Factory{
  private:
    std::vector<std::string> owners;

  public:
    Product* createProduct(std::string owner){
      return new IDCard(owner);
    }

    void registerProduct(Product* p){
      owners.push_back(((IDCard*)p)->getOwner());
    }

    std::vector<std::string> getOwners(){
      return owners;
    }
};