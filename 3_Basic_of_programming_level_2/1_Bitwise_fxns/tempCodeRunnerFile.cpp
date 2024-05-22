  int setBitCount=0;
    while(num !=0){
        int lastBit = (num & 1);
        if(lastBit ==1){
            setBitCount = setBitCount + 1;
        }
        //Right shift
        num = num >> 1;
    }
    cout<<"toyal set bits : "<<setBitCount<<endl;
