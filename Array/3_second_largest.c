#include <stdio.h>

int secondLargest(int *arr,int n) {
    int max1 = arr[0];
    int max2 = -1;

    for(int i = 1; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2) {
            max2 = arr[i];
        }
    }
    return max2;
}

int main(){
    int arr[] ={2,3,6,4,5,7,1};
    int n = 7;
    
    printf("Second largest element in the array : %d\n",secondLargest(arr,n));
}