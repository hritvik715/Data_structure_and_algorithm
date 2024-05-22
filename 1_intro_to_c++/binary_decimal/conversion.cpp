#include<iostream>
#include<cmath>
using namespace std;

// int decimalToBinaryMethod1(int n){
//     //imp-division method
//     int binaryno = 0;
//     int i=0;
//     while(n >0){
//         int bit = n % 2;
//         binaryno = bit*pow(10 , i++) + binaryno;//imp-first use i then increase it by 1
//         n = n/2;
//     }
//     return binaryno;
// }





// int decimalToBinaryMethod2(int n){
//     //imp-bitwise method
//     int binaryno =  0;
//     int i = 0;
//     while(n >0){
//         int bit = (n & 1);//bitwise AND operation
//         binaryno  =bit*pow(10 ,i++) + binaryno;
//         n = n >> 1;//right shift by 1
//     }
//     return binaryno;
// }
    

int binaryToDecimal(int n){
    int decimal = 0;
    int i= 0;
    while(n){
        int last_bit = n %10;//e.g.  10111 % 10 = 1(remainder)
        decimal = decimal + last_bit * pow(2 , i++);
        n/=10;
    }
    return decimal;
}





int main()
{
    // int n;
    // cout<<"enter a number : ";
    // cin>>n;
    // // int binary = decimalToBinaryMethod1(n);
    // int binary = decimalToBinaryMethod2(n);
    // cout<<binary;
       


    int binaryno;
    cout<<"enter ";
    cin>>binaryno;
    cout<<binaryToDecimal(binaryno)<<endl;
       
    return 0;
}