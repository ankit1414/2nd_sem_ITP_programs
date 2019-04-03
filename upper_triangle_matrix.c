#include <stdio.h>
int main() {
  int a[10][10], m, n;
  printf("Enter Rows and Columns:: ");
  scanf("%d %d", &m, &n);
  printf("Enter Elements::\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  printf("\nUpper Triangle:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (i > j)
        printf(" \t");
      else
        printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  printf("\n\t\t\t\t\tANKIT(D-6)\n");
  return 0;
}
