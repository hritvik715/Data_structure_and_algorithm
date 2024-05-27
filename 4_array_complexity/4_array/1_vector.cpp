#include<iostream>
#include<vector>
using namespace std;
int main()
{
       
    vector<int>v;      
    v.push_back(5);
    v.push_back(9);
    v.push_back(6);


    //remove
    // v.pop_back();//it remove last element

    int target = 70;
    int n= v.size();
    for(int i = 0 ;i<n ; i++){
        if(v[i] == target){
            return true;
        }
    }


    return 0;
}