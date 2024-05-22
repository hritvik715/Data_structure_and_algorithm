#include<iostream>
using namespace std;
int main()
{


    //imp->Implicit type conversion
    int num1 =10;
    float num2 =5.5;
    float result1 = num1 + num2;
    int result2 = num1 + num2;
    // cout<<result1<<endl;
    // cout<<result2<<endl;

    // 2. char to int
    char ch ='A';
    char a = ch +1;
    // int a = ch +1;
    // cout<<a<<endl;
    
    //3. int to char
    int b =97;
    char p = b;
    // cout<<p<<endl;

    //imp->explicit type conversion



    int num3=10;
    float num4 =5.5;
    float result5 = num3 + (int)num4;
    // cout<<result5<<endl;


    //1. double to int
    double pi = 3.14159265;
    int intpi = (int)pi;
    // cout<<intpi<<endl;

    //2. float to char
    float floatingNumber = 65.5;
    char charValue = (char)floatingNumber;// Explicit conversion from float to char
    // cout<<charValue<<endl;

    //3. int to float
    int m =10;
    int n =3.0;
    float t = m/((float)n);
    // int t = m/((float)n);
    // float t = ((float)m)/n;
    cout<<t<<endl;
        


    
    return 0;
}