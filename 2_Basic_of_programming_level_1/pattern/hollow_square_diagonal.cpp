#include<iostream>
using namespace std;
int main()
{


    int side;
    cout<<"enter side: ";
    cin>>side;
    for(int row=0 ; row<side ; row++){
        for(int col=0 ; col<side ; col++){
            //logic
            if(row ==0 || row==side-1 || row==col) cout<<"*";//(row ==col) diya isse jha row and col equal hai vha start aayega
            else{
                //middle rows
                if(col==0 || col==side-1) cout<<"*";
                //middle columns
                else cout<<" ";
            }
        } 
        //ye main bhool jaata hu
        cout<<endl;
    }
       


   
       
    return 0;
}