#include<iostream>
using namespace std;
int main()
{
       
    //declaring 2d array
    int arr[4][3];     

    //initialise
    int brr[3][3] = {
        {10,20,100},
        {30,40,200},
        {50,60,300}
    };

    // int brr[3][2] = {10,20};

    int rowSize = 3;
    int colSize = 3;

    //row-wise printing
    // for(int rowIndex = 0 ; rowIndex<rowSize; rowIndex++){
    //     for(int colIndex = 0 ; colIndex<colSize ; colIndex++){
    //         cout<<brr[rowIndex][colIndex]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    //col_wise printing
    for(int c=0 ; c< colSize; c++){
        for(int r= 0 ; r<rowSize ; r++){
            cout<<brr[r][c]<<" ";
        }
        cout<<endl;
    }


    //imp->diagonal print(primary) -> square matrix mey hi possible hai
    //1st way
    // for(int r=0 ; r<rowSize ; r++){
    //     for(int c=0 ; c<colSize ; c++){
    //         if(r == c) {
    //             cout<<brr[r][c]<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //2nd way
    // for(int i = 0 ; i<rowSize ; i++){
    //     cout<<brr[i][i]<<" ";
    // }

    //secondary diagonal

    // for(int r=0 ; r<rowSize ; r++){
    //     for(int c=0 ; c<colSize ; c++){
    //         if((r+c) == rowSize-1){
    //             cout<<brr[r][c]<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }












    return 0;
}



