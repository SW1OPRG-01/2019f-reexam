#include <iostream>
#include "Meal.h"

Meal::Meal(int boeffer, bool ost, bool bacon, std::string drik, std::string tilbehoer) : burger_(Burger(boeffer, ost, bacon)), drik_(drik), tilbehoer_(tilbehoer) { }

void Meal::printMeal() const {
  burger_.print();
  std::cout << drik_ << " og " << tilbehoer_ << std::endl;
}