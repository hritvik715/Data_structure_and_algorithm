#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>v){
    int size = v.size();//imp->ye btaayega currently vector ka kitna size hai
    for(int i = 0 ; i<size ; i++){
        cout<<v[i]<<"  ";
    }
}

int main()
{

    //in vector , dont tell size of vector
    //just keep inserting ,  i will manage the allocation
    vector<int>v;//imp->vector ek array hi hai(but iska aapne size nhi btaaya hai)

    //isme seedha insert karna start kar sakte hai
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    



    // printVector(v);



       
       
    return 0;
}