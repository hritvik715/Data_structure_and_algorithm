#include<iostream>
using namespace std;

int calculatePower(int a  , int b){
    int ans =1;
    for(int i =1 ; i<=b ; i++){
        //a to the power b => a*a*a*....b times
        ans = ans *a;
    }
    return ans;
}

int main()
{
    int power = calculatePower(2,10);
    cout<<power;
       
       
       
    return 0;
}