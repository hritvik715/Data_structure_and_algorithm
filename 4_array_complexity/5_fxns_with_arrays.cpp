#include<iostream>
using namespace std;




void print(int arr[] , int size){
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}


void solve1(int arr[] , int n){
    for(int i=0 ; i<n ;i++){
        arr[i] =arr[i] *10;
    }
}

bool findTarget(int arr[] , int size , int target){
    //travserse the entire array
    for(int i=0 ; i<size ;i++){
        if(arr[i] == target){
            //found
            return true;
        }
    }
    //agar aap yha takk phoch gye toh
    //iska mtlb poora loop chal chuka hai
    //iska matlab poore loop mey kahin bhi target nhi milla
    //iska matlab element not found
    //iska matlab return false
    return false;
}

int main()
{
    int arr[] = {2,5,6,3,7,8};
    int size=5;
    int target =5;

    bool ans = findTarget(arr ,size,target);
    cout<<ans<<endl;

    // solve1(arr, size);
    // print(arr,size);
       
    1:51:19


    return 0;
} 