#include<stdio.h>//+++++++++++++++testing++++++++++++++++++
int swapbyvalue(int n1,int n2)
{   int temp;
    temp=n1;
    n1=n2;
    n2=n1;
    return(n1,n2);//error
}
void main()
{   int v1=11,v2=27;
    v1,v2=swapbyvalue(v1,v2);
    printf("v1=%d",v1);
    printf("v2=%d",v2);
}
