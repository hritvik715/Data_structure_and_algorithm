#include<iostream>
using namespace std;


void printOddInsideRange(int start , int end){
    for(int i = start ; i<=end; i++){
        int n = i;
        if(n & 1) cout<<n<<" ";
    }
    return;
}







int main()
{

    printOddInsideRange(101 , 123);
    
    return 0;
}