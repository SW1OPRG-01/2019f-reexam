#include <iostream>
#include "Burger.h"

Burger::Burger(int boeffer, bool ost, bool bacon) {
  setAntalBoeffer(boeffer);
  ost_ = ost;
  bacon_ = bacon;
}

void Burger::setAntalBoeffer(int boeffer) {
  if(boeffer > 0 && boeffer <= 3) {
    antalBoeffer_ = boeffer;
  } else {
    antalBoeffer_ = 1;
  }
}

void Burger::setBacon(bool bacon) { 
  bacon_ = bacon;
}

void Burger::setOst(bool ost) {
  ost_ = ost;
}

int Burger::getAntalBoeffer() const {
  return antalBoeffer_;
}

bool Burger::getBacon() const {
  return bacon_;
}

bool Burger::getOst() const {
  return ost_;
}

void Burger::print() const {
  std::cout << "Burger med " << antalBoeffer_ << " ";  

  if(antalBoeffer_ > 1) {
    std::cout << "boeffer ";
  } else {
    std::cout << "boef "; 
  }

  if(ost_) {
    std::cout << "med ";
  } else {
    std::cout << "uden ";
  }
  std::cout << "ost ";
  
  if(bacon_) {
    std::cout << "med ";
  } else {
    std::cout << "uden ";
  }
  std::cout << "bacon" << std::endl;
  
}