#include <iostream>

using namespace std;

int maximum_sum_k(int arr[],int n,int k){
    int window_sum = 0;
    int max_sum = 0;

    for(int i=0;i<k;i++){
        window_sum += arr[i];
    }

    for(int i=k;i<n;i++){
        window_sum += (arr[i]-arr[i-k]);
        max_sum = max(max_sum,window_sum);
    }

    return max_sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<maximum_sum_k(arr,n,k);
}