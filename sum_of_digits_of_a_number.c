#include <math.h>
#include <stdio.h>
int main() {
  int number, sum = 0;
  printf("ENTER THE NUMBER:: ");
  scanf("%d", &number);
  while (number != 0) {
    sum += number % 10;
    number /= 10;
  }
  printf("\nSUM OF DIGITS IS %d", sum);
  printf("\n\t\t\t\t\tANKIT(D-6)\n");
}
