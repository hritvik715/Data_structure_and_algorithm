// #include<iostream>
// using namespace std;
// int main()
// {   
//     for(int i= 2  ;i<=100 ; i++){
//         int a = 0;
//         for(int j = 2 ; j<=i-1  ; j++){
//             if(i%j ==0) {
//                 a=1;
//                 break;
//             }
//         }
//         if(a == 1 ) continue;
//         else cout<<i<<endl;
//     }  


//     return 0;
// }



//2nd way
#include<iostream>
using namespace std;



bool checkPrime(int N){
    if(N <= 1 ) return false;
    //check if N is divisible by any nunber between [2 , N-1]

    for(int i = 2 ; i<N ; i++){
        if((N %i) ==0) {
            //kya ye prime hoga
            return false;
        }
    }

    //agar mai yha aa gya means, N is not able to be divided by any number between [2 , N-1]

    return true;

}



int main()
{
    int n;
    cout<<"enter n : ";
    cin>> n;

    


    for(int i = 1 ;i<= n ; i++){

        //let's check if i is prime or not
        bool isPrime = checkPrime(i);

        //if i is prime
        if(isPrime){
            cout<< "Prime: "<<i <<endl;
        }
        // else{
        //     cout<<"Non-Prime" << i <<endl;
        // }
    }
    
       
       
    return 0;
}




 