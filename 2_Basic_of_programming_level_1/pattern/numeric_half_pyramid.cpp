#include<iostream>
using namespace std;
int main()
{
       
    int n=5;
    for(int r=0 ;r<n ; r++){
        // for(int c =1 ;c<=r;c++){
        for(int c =0 ;c<r+1;c++){
            cout<<c+1<<" ";
        }
        cout<<endl;
    }
       
    return 0;
}