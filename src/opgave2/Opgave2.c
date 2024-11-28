#include <stdio.h>
#include <string.h>

int checkCPR(const char* cpr) {
  if(strlen(cpr)  > 11) {
    return 0;
  } 
  for(int i = 0; i < strlen(cpr); i++) {
    char current = cpr[i]; 
    if(i < 6 && (current < '0' || current > '9') || i > 7 && (current < '0' || current > '9')) {
      return 0;
    }    
  }

  if(cpr[6] != '-') {
    return 0;
  }
  
  return 1;
}

int main(int argc, char** argv) {
  printf("%d\n", checkCPR("111111-1111"));
  printf("%d\n", checkCPR("111a11-1111"));
  printf("%d\n", checkCPR("111111-11b1"));
  printf("%d\n", checkCPR("111111g1111"));
  printf("%d\n", checkCPR("11111-11111"));
  printf("%d\n", checkCPR("11111--1111"));
  printf("%d\n", checkCPR("1111111-1111"));
  return 0;
}