#include<iostream>
using namespace std;

void printRowSum(int arr[][4] , int rowSize , int colSize){
    for(int i = 0 ;i<rowSize ; i++){
        int sum=0;
        //har row kay sum starting mey zero hai
        for(int j= 0 ; j<colSize ; j++){
            sum = sum+arr[i][j];

        }
        //jabb saare column kay elements add kar liye hai
        //toh phir print karo
        cout<< sum <<endl;
    }

}


int main()
{

    int arr[3][4] = {
        {10,10,10,10},
        {20,20,20,20},
        {40,40,40,40}
    };

    int rowSize= 3;
    int colSize = 4;


    printRowSum
    (arr , rowSize,colSize);
       
       
       
    return 0;
}