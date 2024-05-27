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
    vector<int>v;
       
    int n;
    cout<<"enter n : "<<endl;
    cin>>n;
    for(int i=0 ; i<n  ; i++){
        int d;
        cin>>d;
        v.push_back(d);
    }

    for(int i =0 ; i<10 ; i++){
        v.push_back(80);
    }
    printVector(v);
    

    //imp-> to clear the vector
    v.clear();
    v.push_back(50);
    printVector(v);
    


    return 0;
}