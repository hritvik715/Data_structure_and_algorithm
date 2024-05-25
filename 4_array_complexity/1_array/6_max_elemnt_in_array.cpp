#include<iostream>
#include<limits.h>
using namespace std;


int findMax(int arr[] , int size){
    // int maxAns = INT_MIN;
    int maxAns = arr[0];
    for(int i=0 ; i<size ; i++){
        //imp->first way(there is inbuilt fxn ->max)
        // maxAns = max(maxAns , arr[i]);
        //imp->second way
        if(arr[i]> maxAns){
            maxAns = arr[i];
        }
    }
    return maxAns;
}
int main()
{

    int arr[100];
    int size;
    cout<<"enter the number of elements"<<endl;
    cin>>size;

    for(int i=0 ; i<size ; i++){
        cout<<"enter the input value for indxex: "<<i<<endl;
        cin>>arr[i];
    }
   
    cout<<"max number is : "<<findMax(arr,size)<<endl;
       
    return 0;
}


