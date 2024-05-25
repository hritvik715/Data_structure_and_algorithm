#include<iostream>
#include<algorithm>//imp->
using namespace std;

int findUniqueNumber(int arr[] , int size){
    int ans=0;

    //to find the final answer we need to xor all the numbers in the array
    for(int i=0 ; i<size ; i++){
        ans = ans ^ arr[i];
    }

    return ans;
}



//imp->my method pending
// int uniqueNumber( int arr[] , int size){
    // int ans=0;
    // for(int i= 0 ;i<size ; i++){
    //     for(int j = i+1 ; j<size ; j++  ){
    //         if(){

    //         }
    //     }
    
    // }
    // return ans;

    // sort(arr, arr+size);
    // for(int i = 0; i < size; i+=2){
    //     for(int j = i+1; j <= i+1; j++){
    //         if(arr[i] != arr[j]){
    //             return arr[i];
    //         }
    //     }
    // } 


//     sort(arr, arr+size);
//     for(int i = 0; i < size; i+=2){
//         if(arr[i] != arr[i+1]){
//             return arr[i];
//         }
//     } 
// }

int main()
{  
    int arr[] = {2,3,5,2,56,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ans = findUniqueNumber(arr,n);
    cout<<ans;
     
    // cout<<uniqueNumber(arr , n);

    return 0;
}


