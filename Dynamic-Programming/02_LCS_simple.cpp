#include<iostream>

using namespace std;

int lcs(string a, string b,int m,int n){
    if(m==0 || n==0){
        return 0;
    }
    if(a[m-1]==b[n-1]){
        return 1+lcs(a,b,m-1,n-1);
    }
    else{
        return max(lcs(a,b,m-1,n),lcs(a,b,m,n-1));
    }
}
// Time complexity of recursive solurion :- O(2^n)

// Dimesions of memo table is equal to number of parameters changing in recursive call.

int memo[1000000][1000000];
int lcs_memo(string a, string b,int m,int n){
    if(memo[m][n]!=-1){
        return memo[m][n];
    }
    
    if(m==0 || n==0){
        memo[m][n] = 0;
    }
    if(a[m-1]==b[n-1]){
        memo[m][n] = 1+lcs(a,b,m-1,n-1);
    }
    else{
        memo[m][n] = max(lcs(a,b,m-1,n),lcs(a,b,m,n-1));
    }

    return memo[m][n];
}
// Time complexity of memo solution = theta(m*n)

int main(){
    string a = "abcd";
    string b = "abd";

    cout<<lcs(a,b,a.size(),b.size());

    for(int i = 0; i < 1000000; i++){
        for(int j = 0; j < 1000000; j++){
            memo[i][j] = -1;
        }
    }

    cout<<lcs_memo(a,b,a.size(),b.size());
}