#include<iostream>
using namespace std;
int main()
{
       
    //imp->implicit casting => it means compiler ney khud kri hai maine nhi kri
    //int to float
    // int x = 10;
    // float y = 5.5;
    // float ans = x + y;
    // cout<<ans<<endl;     
 


    //2. char to int
    // char ch = 'A';
    // char a = ch +1;
    // cout<<a<<endl;

    // int to char
    int a = 97;
    char ch =a;
    cout<<ch<<endl;






    //imp-> Explicit type casting
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + (int)num2;
    // cout<<result<<endl;

    // 1. double to int
    double pi = 3.14159265;
    int intpi = (int)pi;
    // cout<<intpi<<endl;


    //2.float to char
    float floatingNumber = 65.35;
    char charValue = (char)floatingNumber;
    // cout<<charValue<<endl;



    //3. int to float
    int p =10;
    int q= 3.0;
    float r = p / ((float)q);
    // cout<<c<<endl;



    return 0;
}