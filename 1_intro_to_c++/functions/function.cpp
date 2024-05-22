#include<iostream>
using namespace std;


void printCounting(){
    for(int i = 1 ; i<=5 ;i++){
        cout<<i <<" ";
    }cout<<endl;
}



int sum(int a  , int b){
    int totalSum  =a+b;
    return totalSum;
}


void name();


int getMultiply(int x  ,int  y , int z){
    return x*y*z;
}

void nameTentimes(){
    for(int i=1 ; i<=10 ;i++){
        cout<<"babbar"<<endl;
    }
}


void printMultiplesFive(int num){
    for(int i=1 ;i<=10 ;i++){
        cout<<num *i<<endl;
    }
}

int convertIntoCelcius(int far){
    int celcius =  (far -32)*5/9;
    return celcius;
}

char convertIntoUpperCase(char ch){
    char answer = ch - 'a' +'A';
    return answer;
}


int main()
{
    // printCounting();

    // int ans =  sum(50,10);
    // cout<<ans;


    name();



    int multiPlicationAnswer = getMultiply(5,4,6);
    cout<<multiPlicationAnswer<<endl;


    nameTentimes();//calling void function


    int x =5;
    printMultiplesFive(x);



    char result = convertIntoUpperCase('k');
    cout<<result;

    return 0;
}


void name(){
    cout<<"babbar"<<endl;
}