#include<iostream>
using namespace std;


void printDiagonalSumm(int arr[][3] , int rowSize , int colSize){

    //1st way (TC=O(n*n))
    // int sum = 0;
    // for(int i=0 ; i<rowSize ; i++){
    //     for(int j=0 ; j<colSize ; j++){
    //         if(i==j){
    //             sum = sum + arr[i][j];
    //         }
    //     }
    // }
    // cout<<"sum "<<sum<<endl;



    //2nd way (TC = O(n))
    int sum = 0 ;
    for(int i = 0 ; i<rowSize ; i++){//rowsize , colsize (both are same)
        sum = sum + arr[i][i];
    }
    cout<<"sum : "<<sum<<endl;
}

int main()
{
       
    int arr[3][3] = {
        {10,10,10},
        {20,20,20},
        {40,40,40}
    };

    int rowSize= 3;
    int colSize = 3;


    printDiagonalSumm(arr , rowSize,colSize);
       


    
       
       
    return 0;
}