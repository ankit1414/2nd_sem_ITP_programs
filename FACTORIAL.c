//DEVELOPED BY: ANKIT BHARDWAJ
#include<stdio.h>
int fact(int num){
    if (num==0) return 1;
    else return num*fact(num-1);
}
void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("The factorial is : %d",fact(num));
    printf("\n\t\t\t\t\tANKIT(D-6)\n");

}
