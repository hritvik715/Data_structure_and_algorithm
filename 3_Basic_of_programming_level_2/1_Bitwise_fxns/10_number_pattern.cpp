#include<iostream>
using namespace std;
int main()
{
    int num=1;  
    for(int r = 0 ;r<5 ; r++){
        for(int c =0 ;c<r+1 ;c++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
       
       
    return 0;
}