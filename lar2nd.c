//2nd largest in an array
#include<stdio.h>
int main()
{   int siz,i=0,max=-1000000,max2=-10000000;
    printf("Enter the size of the array: ");
    scanf("%d",&siz);
    int arr[siz];
    printf("ENTER THE ARRAY......\n");
    for(i=0; i<siz; ++i)//failing for negative numberes
    {   scanf("%d",&arr[i]);
        if(max<arr[i])
            max=arr[i];
        if(i!=0 && max2<arr[i-1]&& arr[i-1]<max)
            max2=arr[i-1];
    }
    if(max2<arr[siz-1] && arr[siz-1]<max)
        max2=arr[siz-1];
    printf("The 2nd largest number in the array is: %d",max2);
    return 0;
}
