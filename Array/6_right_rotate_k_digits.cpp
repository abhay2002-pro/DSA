#include<iostream>
#include<algorithm>

using namespace std;

void reverse(int arr[],int low,int high){
    for(int i = low,j = high; i < j; i++ , j--){
        swap(arr[i],arr[j]);
    }
}

int main(){
   int n,k;
   cin>>n>>k;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   k%=n;
   reverse(arr,0,n-k-1);
   reverse(arr,n-k,n-1);
   reverse(arr,0,n-1);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
}