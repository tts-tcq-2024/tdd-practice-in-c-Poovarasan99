#include <stdio.h>
int check_for_empty_string(char* input_string){
  int result = -1;
  if(*input_string == '\0'){
    result = 0;
  }
  return result;
}
int add(const char* input_string){
  /* duplicating the input string to avoid modifying the original string */
  char input_copy[50];
  strcpy(input_copy,input_string);
  int sum = check_for_empty_string(input_copy);
  return sum;
}
