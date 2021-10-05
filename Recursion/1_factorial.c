#include <stdio.h>


int factorial(int n) { 
    if(n==0){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){
    int n;
    printf("Enter value : ");
    scanf("%d",&n);

    printf("factorial : %d\n",factorial(n));
}