#include<iostream>
using namespace std;



bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}

int main()
{
       
    int a[5] = {1,2,3,4,5}; 
    int n=5;
    int value = 2;
    bool ans = linearSearch(a , n,value);
    cout<<ans;
    return 0;
}