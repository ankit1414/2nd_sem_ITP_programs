#include<stdio.h>
#include<string.h>
int main()
{   int flag=2,i,count,j;
    char arr0[330],arr1[70],arr2[330];
    printf("ENTER STRING 1: ");
    gets(arr0);
    strcpy(arr2,arr0);
    printf("\nENTER STRING 2: ");
    gets(arr1);
    for(i=0; arr0[i]!='\0'; ++i);
    count=i;
    for(i=0; arr1[i]!='\0'; ++i)
        arr0[i+count]=arr1[i];
    arr0[i+count]='\0';
    printf("\nTHE CONCATINATED STRING IS::%s\n",arr0);
    printf("\n\nUSING STRCPY FUNCION is   ::");
    strcat(arr2,arr1);
    printf("%s",arr2);
    printf("\n\t\t\t\t\tANKIT(D-6)\n");
    return 0;

}
