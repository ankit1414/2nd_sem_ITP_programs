#include <stdio.h>
#include <string.h>
int main() {
  int i;
  char str[100];
  printf("ENTER THE STRING::");
  gets(str);
  for(i=0; str[i]!='\0'; ++i);
  printf("LENGTH OF STRING(without inbuilt function)::%d\n", i);
  printf("LENGTH OF STRING(using inbuilt function)  ::%d\n", strlen(str));
  printf("\n\t\t\t\t\tANKIT(D-6)\n");
  return 0;
}
