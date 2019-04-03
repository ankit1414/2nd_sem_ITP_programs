#include<stdio.h>
int main()
{
    int siz,i,cp,cn,ce;
    cp=cn=ce=0;
    printf("Enter the size of the array: ");
    scanf("%d",&siz);
    int arr[siz];
    for(i=0; i<siz; ++i)
    {   if(arr[i]>=0)
            cp++;
        if(arr[i]<0)
            cn++;
        if(arr[i]%2==0)
            ce++;
    }
    printf("The number of positive integers in the array == %d",cp);
    printf("The number of negative integers in the array == %d",cn);
    printf("The number of even integers in the array     == %d",ce);
    return 0;
}
