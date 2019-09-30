//program to count the no of even ...positive.....negative integers in an array
//DEVELOPED BY: ANKIT BHARDWAJ
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
        else if(arr[i]<0)
            cn++;
        else
            ce++;
    }
    printf("The number of positive integers in the array == %d",cp);
    printf("The number of negative integers in the array == %d",cn);
    printf("The number of even integers in the array     == %d",ce);
    return 0;
}
