#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>v){
    cout<<"printing vector method 1"<<endl;
    int size = v.size();
    for(int i = 0 ; i<size ; i++){
        //imp->1st way to print
        // cout<<v[i]<<"  ";
        //imp->2nd way to print
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

void printVectormtd2(vector<int>v){
    cout<<"printing vector methdo 2"<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
}



int main()
{

    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    printVector(v);
    printVectormtd2(v);



    
    

    // vector<char>v;//imp->
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('c');
    // v.push_back('d');
       
    // cout<<"front element : "<<v[0]<<endl;
    // cout<<"end element : "<<v[v.size() - 1]<<endl;
       
    // cout<<"front element : "<<v.front()<<endl;
    // cout<<"end element : "<<v.back()<<endl;   
    return 0;
}