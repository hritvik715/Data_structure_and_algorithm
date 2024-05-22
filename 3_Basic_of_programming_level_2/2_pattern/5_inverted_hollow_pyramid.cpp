#include<iostream>
using namespace std;
int main()
{      
       
    int n=5;
    //outer loop
    for(int r =0 ; r<n ; r++){
        //1. spaces
        for(int c=0 ; c<r ; c++){
            cout<<" ";
        }
        //2. stars
        for(int c=0 ; c<n-r ; c++){
            if(r==0 || r==n-1 || c==0 ||c==(n-r)-1) //ye vaala loop (n-r) times chal rha hai toh aakhri index (n-r-1) hoga
            cout<<"* ";
            else cout<<"  ";    
            }
        cout<<endl;
    }
         
    return 0;
}  