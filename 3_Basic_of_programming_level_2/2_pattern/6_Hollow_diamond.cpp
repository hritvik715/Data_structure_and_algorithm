#include<iostream>
using namespace std;
int main()
{



    int n= 10;
    //imp->Hollow pyramid
    for(int r=0  ; r<n ; r++){
        //1. spaces
        for(int c=0 ; c <n-r-1 ; c++){
            cout<<" ";
        }
        //2. stars
        for(int c=0  ;c<r+1 ;c++){
            if(r==0 /*|| r==n-1 */ || c==0 || c==r+1-1){//last star in each row = r+1-1
            cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }   


    //imp->inverted hollow pyramid
    for(int r =0 ; r<n ; r++){
        //1. spaces
        for(int c=0 ; c<r ; c++){
            cout<<" ";
        }
        //2. stars
        for(int c=0 ; c<n-r ; c++){
            if(/*r==0 ||*/ r==n-1 || c==0 ||c==(n-r)-1) 
            cout<<"* ";
            else cout<<"  ";    
            }
        cout<<endl;
    }  
       
       
       
    return 0;
}