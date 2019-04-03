#include <stdio.h>
void main() {
  char str[100], str2[100]="",str3[100];
  printf("\n Enter a string 1 : ");
  gets(str);
  printf("\nThe string 2 is : %s",str2);
  for (int i = 0; i < 100 && str[i] != '\0'; i++)
    str2[i] = str[i];

  printf("\nString 2 after copy operation: %s", str2);
  strcpy(str3,str);
  printf("\nString copy using strcpy:: %s",str3);
  printf("\n\t\t\t\t\tANKIT(D-6)\n");

}
