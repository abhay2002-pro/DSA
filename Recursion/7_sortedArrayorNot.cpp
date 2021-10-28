#include <bits/stdc++.h>

using namespace std;

bool recursion(int arr[],int n){
    if(n==0){
        return true;
    }
    return arr[n]>arr[n-1]&&recursion(arr,n-1);
}

int main(){
    int n = 6;
    int arr[n] = {1, 2, 3, 5, 6, 8};
    cout<<recursion(arr,n-1)<<endl;
}