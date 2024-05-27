#include<iostream>
using namespace std;

void fun(int a[] , int n){
    cout<<"array elements are : "<<endl;
    for(int i =0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}

int main()
{


    //static memory allocation of array
    // int arr[5] = {1,2,3,4,5};

    //dynamic
    int n;
    cout<<"enter n : ";
    cin>>n;
    int *arr = new int[n];//each element would be zero , or garbage
    for(int i=0 ; i<n ; i++){
        int data;
        cin>>data;
        arr[i] =data;
    }// 0 to 4 index
      


    //jaada matt soch isse niche
    arr[n] = 80;//it wont work
    for(int i=0 ; i<n ;i++){
        arr[i+n] = 80;//this also wont work
    }// 5 to (n-1) index


    fun(arr,n);


       
       
       
    return 0;
}