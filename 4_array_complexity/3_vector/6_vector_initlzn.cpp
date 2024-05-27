#include<iostream>
#include<vector>
using namespace std;


void printVector(vector<int>v){
    cout<<"printing vector"<<endl;
    int size = v.size();
    for(int i = 0 ; i<size ; i++){
        //imp->1st way to print
        // cout<<v[i]<<"  ";
        //imp->2nd way to print
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}






int main()
{
       

 



    //vector initialization
    //1st way of initialization
    // vector<int>arr; //default with no data  and 0 size
    //2nd way of initialization

    // vector<int>arr2(5 , -1);//init with n size with specific data
    // printVector(arr2);


    //3rd way of initialization
    // vector<int>arr3 = {1,2,3,4,5};
    // printVector(arr3);

    //4th way of initialization
    // vector<int>arr4{5,6,8,9,7};
    // printVector(arr4);


    //imp-> how to copy vector
    // vector<int>arr5 = {1,2,3,4,5};
    // vector<int>arr6(arr5);
    // printVector(arr6);


    
       
       
    return 0;
}