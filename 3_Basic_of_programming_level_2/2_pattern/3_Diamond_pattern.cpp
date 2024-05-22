#include<iostream>
using namespace std;
int main()
{
       
    
    int n=5;
    //fullpyramid + inverted pyramid = Diamond pattern

    //full pyramid
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

    //inverted pyramid
      for(int r =0 ; r<n ; r++){
        //1. spaces
        for(int c=0 ; c<r ; c++){
            cout<<" ";
        }
        //2. stars
        for(int c=0 ; c<n-r ; c++){
            cout<<"* ";
        }
        cout<<endl;
    }
     
       
    return 0;
}