#include <stdio.h>

int delete(int *arr,int n,int key){
    int ind  = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        printf("Element not found\n");
        return n;
    }
    for(int i = ind; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    return n-1;
}

int main(){ 
    int arr[] = {3,8,12,5,6};
    int n = 5;
    int x = 12;
    n = delete(arr,n,x);

    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

}