#include<iostream>
using namespace std;
int main()
{



    // for(int i  = 1 ; i<= 100 ; i++){
    //     cout<<i<<": hey hritvik"<<endl;    
    //  }  
       




    // for(;;){
    //     cout<<"hi"<<endl;
    // }


    //counting from 1 to 5
    for(int i = 51 ; i<=69 ; i++){
        cout<<i<<endl;
    }
       




    cout<<endl;



    //Break keyword -> poora ek loop ko break kar deta
    for(int i = 1  ; i<= 10 ;i++){
        cout<<i<<" ";
        if(i == 5 ){
            break;
        }
    }



    cout<<endl;
    cout<<endl;

    //continue keyword -> ye ek iteration skip karva deta hai
    for(int i = 1 ; i<=5 ; i++){
        if(i==4){
            continue;
        }
        cout<<i<<endl;
    }







//while loop

int i = 1 ;
while(i <= 5){
    cout<<"Iteration " <<i <<endl;
    i = i+1;
}


for (int i = -10 ; i<=0 ; i = i+1){
    cout<<i<<endl;
}


// for(int i = 7 ; i<=70 ; i= 7 * i ){
//     cout<<i<<endl;
// }


//printing A to Z
// 1st way
for(char ch ='A' ; ch <= 'Z' ; ch = ch +1){
    cout<<ch<<endl;
}

cout<<"-----------------"<<endl;

//2nd way
for(char i = 65 ; i<=90 ; i++){
    cout<<(char)i<<endl;
}


//small alphabet
for(char i ='a' ; i<='z' ; i++){
    cout<<i <<endl;
}










// int x = 65;
// int y = (char)x;
// cout<<y;




    return 0;           
}