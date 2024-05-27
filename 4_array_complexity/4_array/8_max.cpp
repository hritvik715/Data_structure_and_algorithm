#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>
using namespace std;
int findMaxIn2DArray(int arr[][4] , int rowSize , int colSize){
    int maxAns = INT_MIN;

    for(int i =0 ; i<rowSize ; i++){
        for(int j=0 ; j<colSize ; j++){
            maxAns = max(arr[i][j] , maxAns);
        }
    }

    //overall T.C -> O(rowSize * colSize)
    //overall S.C -> O(1) //hamne 3 variable banaya hai yha

    return maxAns;
}
 


int main()
{
    int arr[3][4] = {
        {10,11,12,13},
        {20,21,22,2},
        {31,32,44,55}
    };

    int rowSize= 3;
    int colSize = 4;

    int ans  = findMaxIn2DArray(arr,rowSize,colSize);

    cout<<ans;

       
       
       
    return 0;
}