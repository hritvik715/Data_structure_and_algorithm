#include<iostream>
using namespace std;
int main()
{



    //Note- unary
    int a = 5 ;
    cout<< a <<endl;
    //a ki value 6 ho chuki hai
    cout<<(a++)<<endl;
    //print kra toh 6 hi print hoga , but a ki value 7 ho chuki hogi
    cout<<a<<endl;
    //yha takk a ki value 7 ban chuki hai
    cout<<(--a)<<endl;
    //a ki value 6 ban chuki hai
    cout<<(a--)<< endl;
    //print toh 6 hi hoga but a ki value 5 ban chuki hai
    //let's verify
    cout<<a <<endl;




    //Note- ARITHMATIC OPERATOR

    int x = 12 ;
    int y = 6 ;

    cout<<(x + y)<<endl;
    cout<<x/y <<endl;



    cout<<(10 <5) <<endl;





    bool cond1 =(10 >5);//true
    bool cond2 = ( 5 >= 5 );//true
    bool cond3 = ( 2 == 2);//true

    if(cond1 && cond2 && cond3){
        cout<<"all conditions are true"<< endl;
    }
    else{
        cout<<"all cinditions are not true"<< endl;
    }
       



    
    bool cond4 =(10 >5);//true
    bool cond5 = ( 5 > 5 );//false
    bool cond6 = ( 2 != 2);//false

    if(cond1 || cond2 || cond3){
        cout<<"atleast one cond is true"<< endl;
    }
    else{
        cout<<"all conditions are false"<< endl;
    }
       


    //Note- not operator -> logical operator
    bool condition_a = (5 != 10);
    cout<<condition_a<<endl;
    cout<<!condition_a<<endl;



    bool condition_b = true;
    cout<<!condition_b <<endl;



    cout<<"--------------------"<<endl;

    //Note-Bitwise operator
    cout<<(5 & 4) <<endl;
    cout<<(5 | 4) <<endl;

    cout<<(~1)<<endl;//ans = -2


    //left shift opearator
    cout<<"left shift :-"<<endl;
    cout<< (5 << 1 )<<endl;//ans = 5 *2  
    cout<< (5 << 2 )<<endl;//5 *2 = ans * 2  
    cout<< (5 << 3 )<<endl;//5 *2 = ans1 *2 = ans2 *2  
       


    //right shift operator
    cout<<"right shift :-"<<endl;
    cout<<(5 >> 1)<<endl;
    cout<< (1 >> 1 )<<endl; // 1/2=0
    cout<< (100 >> 1 )<<endl;//100/2 =50 
    cout<< (100 >> 2 )<<endl;//100/2 =50/2 =25 
    cout<< (100 >> 3 )<<endl;//100/2 =50/2 =25/2 =12




    //Note-xor ya exclusive OR
    cout<<"xor "<<endl;
    cout<<(5^5)<<endl;
    cout<<(5^4)<<endl;

    cout<<(5^5)<<endl;
    
    
    
    return 0;



}