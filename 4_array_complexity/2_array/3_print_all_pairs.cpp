#include<iostream>
using namespace std;

void printAllPairs(int arr[]  ,int n){
    for(int i = 0 ; i<n ; i++){
        //for every i we are running looping variable "j" from start to end
        for(int j=0 ; j<n ; j++){
            cout<<arr[i]<<arr[j]<<" ";
        }
        cout<<endl;
    }
}


void print(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            cout<<arr[i]<<arr[j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{

    int arr[] = {1,2,3,4,5};
    int size = 5;
    
    // printAllPairs(arr, size);
    print(arr,size);
       
    return 0;
}