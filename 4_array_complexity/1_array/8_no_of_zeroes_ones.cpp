#include<iostream>
using namespace std;

void printZeroesOnes(int arr[] , int n){
    int zeroCount=0;
    int oneCount =0;

    //traverse array
    for(int i=0 ; i<n ; i++){
        int currentElement = arr[i];

        if(currentElement ==0){
            zeroCount++;   
        }
        if(currentElement ==1){
            oneCount++;
        }
    }
    cout<<"total zeroes: "<<zeroCount<<endl;
    cout<<"total ones: "<<oneCount<<endl;
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
       

    printZeroesOnes(arr , size);
       
       
    return 0;
}