#ifndef BURGER_H
#define BURGER_H

class Burger {
  public:
    Burger(int boeffer = 1, bool ost = false, bool bacon = false);
    int getAntalBoeffer() const;
    void setAntalBoeffer(int boeffer);
    bool getOst() const;
    void setOst(bool ost);
    void setBacon(bool bacon);
    bool getBacon() const;
    void print() const;
  private:
    int antalBoeffer_; 
    bool ost_;
    bool bacon_;
};

#endif