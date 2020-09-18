#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n) {
  if (n == 0){
    return 0;
  }
  else{
    return (n%10 + digit_sum((n/10)));
  }
}

int main(void) {
  char* num = readline("Enter an int: ");
  int num_int = atof(num);
  printf("sum of digits of %d is %d.\n", num_int, digit_sum(num_int));
  return 0;
}