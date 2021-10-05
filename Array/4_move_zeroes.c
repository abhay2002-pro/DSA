#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void moveZeroesStart(int *arr,int n){
    int j = n-1;
    for(int i = n-1; i >= 0; i--){
        if(arr[i]!=0){
            swap(&arr[j],&arr[i]);
            j--;
        }
    }
}

void moveZeroesEnd(int *arr,int n){
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]!=0){
            swap(&arr[j],&arr[i]);
            j++;
        }
    }
}

int main(){
    int arr1[] = {8,5,0,10,0,20};
    int n = 6;
    printf("Move all zeroes to the end : ");
    moveZeroesEnd(arr1,n);

    for(int i = 0; i < n; i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");

    int arr2[] = {8,5,0,10,0,20};
    n = 6;
    printf("Move all zeroes to the beginning : ");
    moveZeroesStart(arr2,n);

    for(int i = 0; i < n; i++){
        printf("%d ",arr2[i]);
    }
}