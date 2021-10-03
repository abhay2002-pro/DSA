#include<iostream>
#include <cstring>

using namespace std;

int rfibonaaci(int n){
    if(n==0 || n==1) {
        return n;
    }

    return rfibonaaci(n-1) + rfibonaaci(n-2); 
}

int memo[1000000];

int fibonacci_memo(int n)
{
    if(memo[n]==-1){
        int res;
        if(n==0 || n==1)
            return n;
        else{ 
            res = fibonacci_memo(n-1)+fibonacci_memo(n-2); 
        }
        memo[n]=res;
    }
    return memo[n];
}

int fibonacci_tabulation(int n){
    int f[n+1];
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i <= n; i++){
        f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}


int main(){
    cout<<rfibonaaci(6)<<endl;;
    memset(memo,-1,1000000);
    cout<<fibonacci_memo(6)<<endl;
    cout<<fibonacci_tabulation(6);
}

// Time complexity of simple naive recursive approach is O(2^n)
// Time complexity of Memoization recursive approach is O(n)