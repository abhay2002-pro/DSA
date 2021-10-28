#include <iostream>
#include <vector>

using namespace std;

int findMin(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    return min(arr[n-1],findMin(arr,n-1));
}

int findMax(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    return max(arr[n-1],findMax(arr,n-1));
}

int main(){
    int A[] = {1, -8, 4, -5, 10, 2};
    int n = sizeof(A)/sizeof(A[0]);
    cout << findMin(A, n)<<endl;;
    cout<< findMax(A,n);
    return 0;
}