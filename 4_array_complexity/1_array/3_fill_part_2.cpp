#include<iostream>
using namespace std;
int main()
{
    


    int a[10];
    //imp->
    // fill(a , a+5 ,67);//67 will be filled [a,a+5)
    // fill(a+5 , a+10 , 100);//100 will be filled [a+5 , a+10)


    //imp->
    // fill(a[0] , a+5 ,67);//this wont work
    // fill(a[0]+5 , a+10 , 100);//this wont work

    //imp->
    fill(&a[0] , a+5 ,67);
    fill(&a[0]+5 , a+10 , 100);

    for(int i=0 ; i<10 ; i++){
        cout<<i <<" --> "<<a[i]<<endl; 
    }
       
       
       
    return 0;
}    