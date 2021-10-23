#include <stdio.h>

void print(int n){
    if(n==0){
        return;
    }
    printf("%d ",n);
    print(n-1);
}

void printRev(int n){
    if(n==0){
        return;
    }
    printRev(n-1);
    printf("%d ",n);
}
int main(){
    print(5);
    printf("\n");
    printRev(5);
}