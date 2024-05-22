#include<iostream>
using namespace std;

void solve(int val){//yha val ki copy bann gyi dusre address mey
    val = val + 10;
    return;
}


int main()
{
    int val = 10;
    solve(val);
    cout<<val;//ye val main vaala hai
          
       
    return 0;
}