#include<iostream>
using namespace std;

bool isPrime(int number){
    for(int i=2 ; i<=(number-1) ; i++){
        if(number % i == 0){
            //not prime
            return false;
        }
    }
    //agar aap yha takk aagye ho
    //iska mtlb kisi se bhi remainder 0 nhi aaya
    //iska mtlb aap prime ho
    //iska mtlb return true

    return true;
}

int main()
{

    bool ans = isPrime(2);
    if(ans == true) cout<<"Prime";
    else cout<<"not prime";

       
       
       
    return 0;
}