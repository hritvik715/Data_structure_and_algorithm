#include<iostream>
using namespace std;
int main()
{
       
    int a =10;
    cout<<++a*++a<<endl;
    a=10;
    cout<<(++a)*(++a);//11*12 or 12*12 =>it depends on compiler
    
                                            
       
    return 0;
}