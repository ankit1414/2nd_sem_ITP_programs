#include <stdio.h>
int main() {
  int a[3][3], b[3][3], s[3][3];
  printf("Enter Elements for 1st matrix(3X3)::\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter Elements for 2nd matrix(3X3)::\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  printf("Multiplication Matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      s[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        s[i][j] += a[i][k] * b[k][j];
      }
      printf("%d ", s[i][j]);
    }
    printf("\n");
  }
  printf("\n\t\t\t\t\tANKIT(D-6)\n");
  return 0;
}
