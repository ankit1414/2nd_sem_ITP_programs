//STRUCTURE PRACTICE....PROGRAM TO ARRANGE THE RECORDS IN ALPHABETICAL ORDER.
//DEVELOPED BY: ANKIT BHARDWAJ
#include<iostream>
#include<string.h>
const int siz=2;
using namespace std;
struct person   {
                    char fname[15];
                    char lname[25];
                    long tel;
                }td[siz],t;
void swapit(person &s1,person &s2){
    t=s1;
    s1=s2;
    s2=t;
}
int main()
{   for(int i=0; i<siz; i++) //for reading the info of the persons
    {   cout<<"enter the first name of person:"<<i+1<<" : ";
        cin>>td[i].fname;
        cout<<"enter the last name of the person:"<<i+1<<" : ";
        cin>>td[i].lname;
        cout<<"enter the telephone number of the person:"<<i+1<<" : ";
        cin>>td[i].tel;
        cout<<"--------------------------------------------------------------------------\n";
    }
    //sorting alphabetically
    for(int i=0; i<siz; i++)
    {   for(int j=0 ; j<siz-i-1; j++)
        {   if(strcmp(td[j].lname,td[j+1].lname)>0)
                swapit(td[j],td[j+1]);
            else if(strcmp(td[j].lname,td[j+1].lname)==0 )
                if(strcmp(td[j].fname,td[j+1].fname)>0)
                    swapit(td[j],td[j+1]);
        }
    }
    cout<<"\n*****************************SORTING DONE************************************\n";
    //after sorting
    for(int i=0; i<siz; i++)
    {   cout<<"person "<<i+1<<" fname: "<<td[i].fname;
        cout<<"\nperson "<<i+1<<" lname: "<<td[i].lname;
        cout<<"\nperson "<<i+1<<" tel: "<<td[i].tel;
        cout<<"\n--------------------------------------------------------------------------\n";
    }
    return 0;
}
