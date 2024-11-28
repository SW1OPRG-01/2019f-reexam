#ifndef MEAL_H
#define MEAL_H

#include <string>
#include "Burger.h"

class Meal {
  public:
    Meal(int boeffer, bool ost, bool bacon, std::string drik = "Coca Cola", std::string tilbehoer = "Pommes Frites");
    void printMeal() const;
  private:
    Burger burger_;
    std::string drik_;
    std::string tilbehoer_;
};

#endif