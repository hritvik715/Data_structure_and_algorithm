#include<iostream>
using namespace std;
int main()
{


    //1. swap inbuilt fxn
    // int a =5;
    // int b=7;
    // swap(a,b);
    // cout<<a<<" "<<b<<endl;



    //2. temp variable
    // int a =5;
    // int b=7;
    // int temp = a;//imp->iske baad (a) khaali nhi hui a mey abhi bhi 5 hai 
    // a=b;//yha (a) ki jo value thi (5) usme overwrite ho gyi (b) toh finally (b) ki value dihegi 
    // b=temp;
    // cout<<a<<" "<<b<<endl;





    //3.arithmatic method
    // int a=5;
    // int b=7;

    // a = a+b;
    // b=a-b;
    // a=a-b;
    // cout<<a<<" "<<b<<endl;
       
       
       
    //4. xor bitwise method
    int a =5;
    int b=7;
    a=a^b;
    b= a^b;
    a=a^b;
    cout<<a<<" "<<b<<endl;


    return 0;
}