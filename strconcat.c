#include<stdio.h>
#include<string.h>
int main()
{   int flag=2,i,count,j;
    char arr0[330],arr1[70];
    printf("ENTER STRING 1: ");
    gets(arr0);
    printf("\nENTER STRING 2: ");
    gets(arr1);
    for(i=0; arr0[i]!='\0'; ++i);
    count=i;
    for(i=0; arr1[i]!='\0'; ++i)
        arr0[i+count]=arr1[i];
    arr0[i+count]='\0';
    printf("\nTHE CONCATINATED STRING IS::%s\n",arr0);
    return 0;

}
