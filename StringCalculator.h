#include <stdio.h>
int check_for_empty_string(char* input_string){
  int result = -1;
  if(*input_string == '\0'){
    result = 0;
  }
  return result;
}
int add(const char* input_string){
  int sum = check_for_empty_string(input_string);
  return sum;
}
