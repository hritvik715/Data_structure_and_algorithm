#include<iostream>
using namespace std;
int main()
{
    
    int n=5;
    for(int r=0 ; r<n ; r++){
        for(int c=0 ; c<n-r ; c++){
            // cout<<"* ";
            if(r==0 || r==n-1 || c==0 ||(r+c==n-1)) cout<<"*";
            else cout<<" ";
        }
        //imp->ye mai bhool jaata hu
        cout<<endl;
    }

       
       
       
    return 0;
}