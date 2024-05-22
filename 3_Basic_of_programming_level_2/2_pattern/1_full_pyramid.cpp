#include<iostream>
using namespace std;

   
void fullPyramid(int n){
    for(int r=0  ; r<n ; r++){
        //1. spaces
        for(int c=0 ; c <n-r-1 ; c++){
            cout<<" ";
        }

        //2. stars
        for(int c=0  ;c<r+1 ;c++){
            cout<<"* ";
        }
        
        cout<<endl;
    }
} 

 

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    fullPyramid(n);

    return 0;
}
       
