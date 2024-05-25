 #include<iostream>
 #include<algorithm>
 using namespace std;

void reverseArray(int arr[] , int n){//array hamesha by reference pass hoti hai
    int l=0;
    int h = n-1;
    //1st way
    while(l<h){//middle vaala element middle mey hi rahega
        //1st way
        // swap(arr[l] , arr[h]);
        // l++;
        // h--;
        //2nd way
        arr[l] = arr[l] ^ arr[h];
        arr[h] = arr[h] ^ arr[l];
        arr[l] = arr[l] ^ arr[h];
        l++;
        h--;
    }


    //pro ki tarah code
    // while(l<h)
        // swap(arr[l++] , arr[h--]);//pehle value use kru and uske baad badhaau , ghatau

}

 int main()
 {  


    int arr[5]  ={5,6,3,7,8};//3 middle mey hi rhega
    int n = sizeof(arr)/sizeof(arr[0]);

    //M1. custom reversal using 2-pointer approach
    reverseArray(arr,n);

    //imp->M2. STL => c++ library
    // reverse(arr, arr+n);
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
        
    return 0;
 }


