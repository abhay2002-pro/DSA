#include<iostream>

using namespace std;

int trialingZeros(int n){
    int cnt = 0;
    for(int i = 5; i < n;i*=5){
        cnt += n/i;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    cout<<trialingZeros(n)<<endl;
}

// Time complexity :- 5^k <= n => O(log5(k))