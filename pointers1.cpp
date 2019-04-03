#include<iostream>
using namespace std;
int *rollno;
float *marks;
int main()
{   int s;
    cout<<"size::";
    cin>>s;
    rollno=new int[s];
    marks=new float[s];
    //checking wheter memory is available or not
    if(!rollno || !marks)
    {   cout<<"out of memory!!!\naborting!!";
        return 1;
    }
    //reading
    for(int i=0; i<s; ++i)
    {   cout<<"\nenter the rollno and marks for student : "<<i+1<<endl;
        cin>>rollno[i]>>marks[i];
    }
    //displaying
    cout<<"\nRollno\tMarks\n";
    for(int i=0; i<s; ++i)
    {   cout<<rollno[i]<<"\t"<<marks[i]<<endl;
    }
    //deallocating the pointers
    delete rollno;
    delete [] marks;
    return 0;
}
