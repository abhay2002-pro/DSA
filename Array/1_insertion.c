#include<stdio.h>

void insert(int *arr,int n,int key,int pos){
    for(int i = n-1; i >= pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = key;
}

int main(){
    int n = 5;
    int arr[]={5,10,20,-1,-1};

    // -1 depicts that that place is still empty.
    insert(arr,5,7,2);

    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}