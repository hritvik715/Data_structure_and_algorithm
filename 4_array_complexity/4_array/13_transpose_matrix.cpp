#include<iostream>
using namespace std;



void transposeMatrix(int arr[][3] , int rowSize , int colSize){


    // int ans[100][100] = {0}; 
    // for(int i = 0 ; i<rowSize ; i++){
    //     for(int j=0 ; j<colSize ; j++){
    //         ans[i][j] = arr[j][i];
    //     }
    // }

    // for(int i = 0 ; i<rowSize ; i++){
    //     for(int j=0 ; j<colSize ; j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    //same array mey hi transpose karo
    for(int i = 0 ; i<rowSize ; i++){
        for(int j=i ; j<colSize ; j++){//imp-> |i=0=>j=0,1,2| and |i=1=>j=1,2| and |i=2=>j=2|
            swap(arr[i][j] , arr[j][i]);
        }
    }  

    cout<<"printing the transpose "<<endl;
    for(int i = 0 ; i<rowSize ; i++){
        for(int j=0 ; j<colSize ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     
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
   
    transposeMatrix(arr,rowSize,colSize);
       


    //understanding   
    // for(int i =0 ; i<3 ; i++){
    //     for(int j=i ;  j<3 ; j++){
    //         cout<<"*"<<" ";//ye array nhi hai (so 0 vaala pehla eleemnt nhi hoga hamesha)                     
    //     }
    //     cout<<endl;
    // }
       
    return 0;
}