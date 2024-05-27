#include<iostream>
using namespace std;

void printColSum(int arr[][4] , int rowSize , int colSize){
    for(int col = 0 ; col<colSize ; col++){
        //harr column kay liye mere pass sum= 0 hona chahiye
        int sum = 0;
        for(int row=0 ; row<rowSize ; row++){
            sum = sum + arr[row][col];
        }
        cout<<sum<<endl;
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


    printColSum(arr , rowSize,colSize);
       
       
       
    return 0;
}