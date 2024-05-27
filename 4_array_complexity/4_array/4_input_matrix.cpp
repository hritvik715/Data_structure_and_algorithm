#include<iostream>
using namespace std;
int main()
{
       
    


    int arr[3][2];
    int rowSize = 2;
    int colSize = 3;

    for(int r=0 ; r<rowSize;r++){
        for(int c=0 ; c<colSize ; c++){
            cout<<"enter value for "<<r<<","<<c<<" : ";
            cin>>arr[r][c];
        }
    }


    cout<<"printing 2d array"<<endl;
    for(int r=0 ; r<rowSize;r++){
        for(int c=0 ; c<colSize ; c++){
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }

    


       
       
    return 0;
}