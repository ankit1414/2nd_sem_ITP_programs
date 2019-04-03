#include<iostream>
using namespace std;
int main()
{   int *val,*rsum,*csum;
    int r,c;
    cout<<"Enter the dimension of the matrix:";
    cin>>r>>c;
    val=new int[r*c];//for 2d array
    rsum=new int[r];//to store row sum in an array
    csum=new int[c];//to store column sum in an array
    for(int i=0; i<r; ++i)
    {   cout<<"\nEnter the elements of row "<<i+1<<" : ";
        rsum[i]=0;
        for(int j=0; j<c; ++j)
        {   cin>>val[i*c+j];
            rsum[i]=rsum[i]+val[i*c+j];
        }
        cout<<rsum[i]<<"\n";

    }



    delete []rsum;
    delete []val;
    delete []csum;
}
