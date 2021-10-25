#include <stdio.h>
int rev = 0;
void reverse(int n){
    if(n==0){
        return;
    }
    rev = (n%10) + rev * 10;
    reverse(n/10);
}

int main(){
    reverse(110);
    printf("%d",rev);
}