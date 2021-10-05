#include <stdio.h>

void leftRotate(int *arr,int n){
    int temp = arr[n-1];

    for(int i = n-1 ; i >= 1 ;i--){
        arr[i] = arr[i-1];
    }

    arr[0] = temp; 
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    leftRotate(arr,n);

    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
    
}