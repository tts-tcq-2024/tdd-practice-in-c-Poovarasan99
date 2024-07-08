#include <stdio.h>

int add(const char* input_string){
  int sum;
  if(*input_string == '\0'){
    sum = 0;
  }
  else{
    sum = -1;
  }
  return sum;
}
