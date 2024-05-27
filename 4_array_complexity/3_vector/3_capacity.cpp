#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>v){
    int size = v.size();
    for(int i = 0 ; i<size ; i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}

int main()
{

    //in vector , dont tell aize of vector
    //just keep inserting ,  i will manage the allocation
    vector<int>v;
    
    while(1){
        int d;
        cin>>d;
        v.push_back(d);
        cout<<"capacity: "<<v.capacity()<<" "<<"size: "<<v.size()<<endl;
    }


    
       
       
    return 0;
}