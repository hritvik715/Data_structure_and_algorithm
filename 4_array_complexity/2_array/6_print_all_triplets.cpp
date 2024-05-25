#include<iostream>
using namespace std;

//imp-> tc=O(n^3) and sc=O(1) {4 variable hai it means consatnt space }
void printAllTriplets(int arr[] , int n ){
    int count=0;
    for(int i=0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            for(int k = 0 ; k<n ; k++){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                count++;
            }
           
        }
       
    }
    cout<<"total triplet printed counted is  : "<<count;
    return;
}

int main()
{

    int arr[] = {10,20,30,40};
    int n=4;
    printAllTriplets(arr,n);
       

       
       
    return 0;
}
