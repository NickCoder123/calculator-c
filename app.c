#include <stdio.h>
#include <math.h>

int main() {
  int num1, num2, opt;
  printf("Enter value for num1: ");
  scanf("%d", &num1);
  
  printf("Enter value for num2: ");
  scanf("%d", &num2);
  
  printf("Enter 1 for addition \n Enter 2 for subtraction \n Enter 3 for multiplication \n Enter 4 for division \n Enter 5 for exponentiation");
  scanf("%d", &opt);
  
  if (opt == 1) {
    printf("%d + %d is %d", num1, num2, num1+num2); 
  }
  
  else if (opt == 2) {
    printf("%d - %d is %d", num1, num2, num1-num2); 
  }
  
  else if (opt == 3) {
    printf("%d * %d is %d", num1, num2, num1*num2);
  }
  
  else if (opt == 4) {
    printf("%d / %d is %d", num1, num2, num1/num2);
  }
  
  else if (opt == 5) {
    printf("%d ^ %d is %d", num1, num2, math.pow(num1, num2);
  }
  
  else {
    printf("invalid");
  }
  
  return 0; 
}
