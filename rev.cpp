#include<iostream>
using namespace std;
int main()
{   int num,rev=0,flag=0,count0=0;
    cout<<"enter the num:::";
    cin>>num;
    while(num>0)
    {   if(num%10!=0)
        {   flag=1;
        }
        if(flag==0)
        {   count0++;
        }
        rev=rev*10+num%10;
        num=num/10;
    }
    for(int i=0; i<count0; i++)
    {   cout<<"0";
    }
    cout<<rev;
}
