#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int r=0  ; r<n ; r++){
        //1. spaces
        for(int c=0 ; c <n-r-1 ; c++){
            cout<<" ";
        }

        //2. stars
        for(int c=0  ;c<r+1 ;c++){
            if(r==0 || r==n-1 || c==0 || c==r+1-1){//last star in each row = r+1-1
            cout<<"* ";
            }
            else{
                cout<<"  ";//double spacing needed here (in single space it wont make the perfect pattern) and also kuki ek star print karne kay saath ek space bhi print kar rhe the toh space kay saath ek or space aayega
            }
        }
        cout<<endl;
    }     
    return 0;
}


