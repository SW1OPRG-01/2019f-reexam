#include "Oekonomi.h"

double beregnOekonomi(double distance, double fuel) {
  if(fuel == 0) {
    return 0;
  }
  return (distance / fuel);
}