//DEVELOPED BY: ANKIT BHARDWAJ
#include<stdio.h>
void main()
{
    int fact=1,num;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("The factorial is : %d",fact);
    printf("\n\t\t\t\t\tANKIT(D-6)\n");

}
