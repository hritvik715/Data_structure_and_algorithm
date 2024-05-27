#include<iostream>
#include<limits.h>
using namespace std;


int findMax(int arr[] , int size)
{
    int minAns = INT_MAX;
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i]< minAns)
        {
            minAns = arr[i];
        }
    }
    return minAns;
}
int main()
{

    int arr[100];
    int size;
    cout<<"enter the number of elements"<<endl;
    cin>>size;

    for(int i=0 ; i<size ; i++)
    {
        cout<<"enter the input value for indxex: "<<i<<endl;
        cin>>arr[i];
    }
   
    cout<<"min number is : "<<findMax(arr,size)<<endl;
       
    return 0;
}