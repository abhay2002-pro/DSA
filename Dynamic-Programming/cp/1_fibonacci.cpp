#include<iostream>


using namespace std;


long long int fibonacci1(int n){
    if(n==0 || n==1){
        return 1;
    }
    return fibonacci1(n-1) + fibonacci1(n-2);
}

long long int fibonacci2(int n,long long int * arr){
    if(arr[n]!=0){
        return arr[n];
    }
    arr[n] = fibonacci2(n-1,arr) + fibonacci2(n-2,arr);
    return arr[n];
}


long long int fibonacci3(int n){
    long long int * arr = new long long int[n+1];
    for(int i=0;i<n+1;i++){
        if(i < 2){
            arr[i] = 1;
        }
        else{
            arr[i] = arr[i-1] + arr[i-2];
        }
    } 
    long long int output = arr[n];
    delete[] arr;
    return output;
}


int main(){
    int input;
    cin >> input;
    long long int * arr = new long long int[input+1];
    cout<<fibonacci3(input)<<"\n";
    for(int i=0;i<input+1;i++){
        arr[i]  = 0;
    }
    arr[0] = 1;
    arr[1] = 1;
    cout<<fibonacci2(input,arr)<<"\n";
    delete[] arr;
    cout<<fibonacci1(input)<<"\n";
}