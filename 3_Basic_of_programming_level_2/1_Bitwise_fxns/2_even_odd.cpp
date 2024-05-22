#include<iostream>
using namespace std;
int main()
{
    int n=7;

    if((n & 1 ) ==0) cout<<"even";
    else if((n&&1)==1) cout<<"odd";       
       

    //short
    if(n&1) cout<<"odd";
    else cout<<"even";
       
    
    
    return 0;
}
