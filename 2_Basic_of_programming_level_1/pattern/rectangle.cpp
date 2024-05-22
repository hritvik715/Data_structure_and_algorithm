#include<iostream>
using namespace std;
int main()
{

    int length, width;
    cout<<"enter length"<<endl;
    cin>>length;

    cout<<"enter width"<<endl;
    cin>>width;

       
    //outer
    for(int row=0 ;row<length ;row++){
        //inner
        for(int col=0 ;col<width ;col++){
            //hr ek column mey 1 * print karna hai
            cout<<"*";
        }
        cout<<endl;
    }  
       
       
    return 0;
}