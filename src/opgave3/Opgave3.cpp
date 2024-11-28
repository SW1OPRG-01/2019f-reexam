#include <iostream>
#include "Burger.h"
#include "Meal.h"

int main(int argc, char** argv) {
  
  Burger(1, false, false).print(); 
  Burger(2, true, false).print();
  Burger(3, true, true).print();
  Burger(4, false, true).print();

  Meal(1, true, true).printMeal();

  return 0;
}