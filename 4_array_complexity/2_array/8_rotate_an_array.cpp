#include<iostream>
using namespace std;
void rotateArray(int arr[] , int size , int n){
    //size-> size of array
    //n-> refers to the number of elements by which we have to shift
    n  = n % size;
    if(n ==0 ){
        //no need to do anything
        return;//vaapis chle jaao
    }
    //step1: copy last finalShift elements into a temp array
    int temp[10000];
    int index=0;
    for(int i=size-n ; i<size ; i++){
        temp[index] = arr[i];//temp mey bhi daal diya
        index++;
    }

    //step2: shift array elements by finalshift places
    for(int i = size-1 ; i>=0 ; i--){
        if(i - n >=0){//you can remove this condition
        arr[i] = arr[i-n];//n=shift  and arr[5] = arr[5-2]
                                //       arr[4] = arr[4-2]
        }
    }
    
    //step3: copy temp elements into original array
    for(int i=0 ; i<n ; i++){
        arr[i] = temp[i];
    }

}


int main()
{
    int arr[] = {10,20,30,40,50,60};
    int size=6;
    //cyclically rotate array by 2 places
    int n = 2;

    cout<<"Before: "<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rotateArray(arr , size , n);

    cout<<"after : "<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl; 
    return 0;
}













