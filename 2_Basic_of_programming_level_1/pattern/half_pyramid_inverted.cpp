#include<iostream>
using namespace std;
int main()
{


    //my mtd
    int n=5;
    // for(int r=0 ; r<5 ; r++){
    //     for(int c=n-1 ; c>=r ; c--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    

    //2nd way(babbar's mtd)
    for(int r=0 ; r<n ; r++){
        for(int c=0 ; c<n-r ; c++){
            cout<<"* ";
        }
        cout<<endl;
    }

    
       
       
    return 0;
}