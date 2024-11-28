#include "Oekonomi.h"
#include <stdio.h>

int main(int argc, char** argv) {
  double distance[] = {800.0, 200.0, 1000.0 };
  double fuel[] = { 50.0, 0.0, 60.0 };

  for(int i = 0; i < sizeof(distance) / sizeof(double); i++) { 
    printf("%.2f\n", beregnOekonomi(distance[i], fuel[i]));
  }

  return 0;
}

