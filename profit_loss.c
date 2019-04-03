#include<stdio.h>
int main()
{

    float s,c,percent;
    printf("Enter the selling price of the item: ");
    scanf("%f",&s);
    printf("Enter the cost price of the item   : ");
    scanf("%f",&c);
    if((s-c)>0)
    {
        printf("The seller had profit in this deal\nThe profit is %f\n",s-c);
        printf("The profit percentage is %f %%",((s-c)/c)*100);
    }
    else if((s-c)<0)
    {
        printf("The seller had loss in this deal\nThe profit is %f\n",c-s);
        printf("The profit percentage is %f %%",((c-s)/c)*100);
    }
    else
        printf("The seller had neither profit nor loss!!!");
    return 0;

}
