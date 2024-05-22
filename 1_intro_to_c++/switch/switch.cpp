#include<iostream>
using namespace std;
int main()

{
    char grade;
    cout<<"Enter your grade"<<endl;
    cin>>grade;

    // if(grade =='A'){
    //     cout<<"90-100";
    // }
    // else if(grade =='B'){
    //     cout<<"80-90";
    // }
    // else if(grade =='C'){
    //     cout<<"70-80";
    // }
    // else{
    //     cout<<"0-100";
    // }




    switch (grade) {
        case 'A':cout<<"90-100";
        break;
        case 'B':cout<<"80-90";
        break;
        case 'C':cout<<"70-80";
        break;
        default:cout<<"0-100";
    }
       



       
       
    return 0;
}