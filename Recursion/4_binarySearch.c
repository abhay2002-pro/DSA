#include <stdio.h>

int binarySearch(int arr[],int target,int l,int h){
    int mid = l + (h - l)/2;
    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] > target){
        return binarySearch(arr, target, l ,mid - 1);
    }
    return binarySearch(arr, target, mid + 1 ,h);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    printf("%d",binarySearch(arr,5,0,7)+1);
}