#include<iostream>
using namespace std;
int main()
{
       
       
    int n=5;
    //outer loop
    for(int r =0 ; r<n ; r++){
        //1. spaces
        for(int c=0 ; c<r ; c++){
            cout<<" ";
        }
        //2. stars
        for(int c=0 ; c<n-r ; c++){
            cout<<"* ";
        }
        cout<<endl;
    }
     
    return 0;
}  