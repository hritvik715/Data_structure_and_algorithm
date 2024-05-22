#include<iostream>
using namespace std;
int main()
{

    int length=10,width=12;
    // colout<<"enterow length: ";
    // colin>>length;
    // colout<<"enterow width: ";
    // colin>>width;


    //outer -> for rows
    // for(int row=0 ;row< length;row++){
    //     //inner -> for column
    //     for(int col=0 ;col<width ; col++){
    //         //first and last row me all stars
    //         if(row==0 || row==length-1){
    //             cout<<"* ";
    //         } 
    //         else{
    //             //middle rows
    //             if(col==0 || col==width-1){
    //                 cout<<"* ";
    //             }
    //             else{
    //                 cout<<"  ";//space kay aage ek orr space(achi spacing aane kay liye)
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }   




    //2nd way
     for(int row=0 ;row< length;row++){
        //inner -> for column
        for(int col=0 ;col<width ; col++){
            //0th row, ya last row , 0th col ya last col ho toh * print kar do
            if(row==0 || row==length-1 ||col==0 || col==width-1)cout<<"* ";
            else cout<<"  ";
            }
            cout<<endl;
     }
     

    return 0;
}