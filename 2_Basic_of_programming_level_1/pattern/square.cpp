#include<iostream>
using namespace std;
int main()
{
    int side;
    cout<<"enter side"<<endl;
    cin>>side;
       
    //outer loop -> 4 rows  
    for(int row =0 ;row<side ;row++){
        //inner loop -> 4 star print
        //har row mey kya karna hai , vo inner loop btaayega
        for(int col =0 ; col<side ;col++){
            //har ek single column mey, 1 star rakha hai
            cout<<"*";
        }
        //4 start print kraane kay baad , next line me aata hu
        cout<<endl;
    }   
       
       
    return 0;
}