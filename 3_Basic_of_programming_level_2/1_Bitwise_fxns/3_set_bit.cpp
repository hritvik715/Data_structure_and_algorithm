#include<iostream>
using namespace std;
int main()
{


    int num = 4;
    // first mtd(long mtd)
    int setBitCount=0;
    while(num !=0){
        int lastBit = (num & 1);//imp->
        if(lastBit ==1){
            setBitCount = setBitCount + 1;
        }
        //Right shift
        num = num >> 1;
    }
    cout<<"toyal set bits : "<<setBitCount<<endl;

     


    //second method(shortCut)

       
    return 0;
}