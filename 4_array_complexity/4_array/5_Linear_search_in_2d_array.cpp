#include<iostream>
using namespace std;


bool search2DArray(int arr[][4] , int rowSize , int colSize , int target){//col dena padega uske bina error aa jaayega
    for(int i=0;  i<rowSize ;i++){
        for(int j=0 ; j<colSize ;j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    //agar line 13 tak phoch gye
    //iska matlab dono loop traverse kar chuke ho
    //iska matlab entire array traverse kar chuke ho
    //iska matlab entire array mey target nhi milla
    //iska matlab target not found
    //iska matlab return false
    return false;
}



int main()
{

    int arr[3][4] = {
        {10,11,12,13},
        {20,21,22,23},
        {31,32,44,55}
    };

    int rowSize = 3;
    int colSize = 4;
    int target = 44;

    bool ans = search2DArray(arr, rowSize , colSize , target);


    cout<<"ans is : "<<ans<<endl;

       
    return 0;
}