#include "IDCard.hpp"
#include "IDCardFactory.hpp"

int main(){
  Factory* f = new IDCardFactory;
  Product* card1 = f->create("Hayato");
  Product* card2 = f->create("Kento");
  Product* card3 = f->create("Yuto");
  card1->use();
  card2->use();
  card3->use();
}