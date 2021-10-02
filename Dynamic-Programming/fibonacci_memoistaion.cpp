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

int dpfibonacci(int n)
{
    if(memo[n]==-1){
        int res;
        if(n==0 || n==1)
            return n;
        else{ 
            res = dpfibonacci(n-1)+dpfibonacci(n-2); 
        }
        memo[n]=res;
    }
    return memo[n];
}

int main(){
    cout<<rfibonaaci(6)<<endl;;
    memset(memo,-1,1000000);
    cout<<dpfibonacci(6);
}

// Time complexity of simple naive recursive approach is O(2^n)
// Time complexity of Memoization recursive approach is O(n)