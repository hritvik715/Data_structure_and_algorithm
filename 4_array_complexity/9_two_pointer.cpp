 #include<iostream>
 using namespace std;

void extremePrint(int arr[] ,int n ){
    int i=0;
    int j=n-1;


    //first way
    while(i <= j){
        if(i==j){
            cout<<arr[i]<<" ";
            i++;//imp->1. from this line i++ kay baad i bda ho jaayega j se toh phir while vaali condition true nhi hogi(i.e. i>j) and loop band ho jaayega
            //2. agar i++ nhi diya then (i==j) hamesha rhega and beech vaala element infinite times print hoga
            //3. you can also use break here instead of i++
        }
        else{
            cout<<arr[i]<<" ";
            i++;
            cout<<arr[j]<<" ";
            j--;

        }
    }

    //second way
        while(i <= j){    
        cout<<arr[i]<<" ";
        i++;
        if(j>i){//jabb j==middle vaala elemt abb kaam nhi krega kuki uss case mey (i==j) tha
            cout<<arr[j]<<" ";
            j--;
        }
    }


}



 int main()
 {
    int arr[] = {10,20,30,40,50,60,70};
    int size= 7;
    extremePrint(arr,size);
        
    return 0;
 }