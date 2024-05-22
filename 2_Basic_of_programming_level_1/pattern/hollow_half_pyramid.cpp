#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int r=0 ; r<n ;r++){
        int totalColumns= r+1;
        for(int c=0 ;c < totalColumns ;c++){
            // if(r==0 || r==1 || r==n-1) {
            //     cout<<"* ";
            // }
            // else{
            //     //middle rows
            //     if(c ==0 || c==totalColumns-1){//last_column=totalColumn-1
            //         cout<<"* ";
            //     }
            //     else{
            //         //middle columns
            //         cout<<"  ";
            //     }
            // }


            //2nd way
            if(r==0 || r==n-1 ||c==0 || r==c){
                cout<<"*";
            }
            else{
                cout<<" ";
            }



        }
        cout<<endl;
    } 
    
    return 0;
}