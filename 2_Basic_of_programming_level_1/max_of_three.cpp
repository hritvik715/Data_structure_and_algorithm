#include<iostream>
using namespace std;
int main()
{
    

    int a = 5;
    int b=6;
    int c=7;
    if(a>b){
        if(a>c) cout<<"a is greater";
        else cout<<"c is greatest";
    }
    else {//a<b is case mey aayega
        if(b>c) cout<<"b is greatest";
        else cout<<"c is greatest";
    }

       
       
       
    return 0;
}