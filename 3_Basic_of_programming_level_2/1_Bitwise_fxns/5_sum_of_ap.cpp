#include<iostream>
using namespace std;

int calculateToatalSum(int a, int l , int n){
    int ans = ((n)*(a+l))/2;
    return ans;
}


int main()
{

    int res  = calculateToatalSum(2,10,5);
    cout<<res<<endl;


     

    float ans = 15 / 2.0;
    cout<<ans;
    
       
    return 0;
}