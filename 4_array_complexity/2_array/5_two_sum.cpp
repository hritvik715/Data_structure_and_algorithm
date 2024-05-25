#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
// pair<int , int> checkTwoSum(int arr[], int n , int target){
//     //assuming -1 , -1 as no answer found
//     pair<int , int> ans = make_pair(-1 , -1);//yha koi si bhi value daal sakte hai 
//     for(int i= 0 ;i<n ; i++ ){
//         for(int j =0 ;j < n ; j++){
//             // if(i==j) break;
//             if(arr[i] + arr[j] == target){
//                 ans.first = arr[i];
//                 ans.second= arr[j];
//                 return ans;
//             }
//         }
//     }
//     //agar aap yha takk phoch gye iska mtlb koi bhi pair target kay equal nhi nikla
//     return ans;
// }

//2nd way
void checkTwoSumUsingArray(int arr[] , int n , int target , int ans[]){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(arr[i] + arr[j] ==target){
                ans[0] = arr[i];
                ans[1]= arr[j]; 
                return;
            }
        }
    }
    return;
}




void checkTwoSumPrintAllAnswers(int arr[] , int n , int target){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(arr[i] + arr[j] ==target){
                cout<<arr[i]<<" , "<<arr[j]<<endl;
            }
        }
    }
    return;
}

int main() 
{

    int arr[] = {10,20,30,40};
    int n = 4 ;
    int target = 60;
    //using pair methdo
    // pair<int , int> ans = checkTwoSum(arr,n , target);
    // if(ans.first == -1 && ans.second ==-1 ) cout<<"pair not found";
    // else cout<<"pair found "<<ans.first<<","<<ans.second<<endl;
  

    // using array method
    int ans[2] = {INT_MIN , INT_MAX};
    checkTwoSumUsingArray(arr, n ,target , ans);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    cout<<"---------------"<<endl;


    checkTwoSumPrintAllAnswers(arr , n ,  target);


    return 0;
}

