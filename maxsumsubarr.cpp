#include<iostream>
using namespace std;
int main()
{   int arr[1000];
    int n,psum=0,maxi=arr[0];
    cout<<"enter size::";
    cin>>n;
    for(int i=0; i<n ; i++)
        cin>>arr[i];
    for(int i=0; i<n ; i++)
    {
        if(arr[i]>0)
            psum=psum+arr[i];
        if(maxi<arr[i])
            maxi=arr[i];
    }
    if(psum==0)
        cout<<"max sum of subarray=="<<maxi;
    else
        cout<<"max sum of subarray=="<<psum;
}
