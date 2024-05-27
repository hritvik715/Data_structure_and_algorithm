 for(int i = size-1 ; i>=0 ; i--){
        if(i - n >=0){//you can remove this condition
        arr[i] = arr[i-n];//n=shift  and arr[5] = arr[5-2]
                                //       arr[4] = arr[4-2]
        }
    }