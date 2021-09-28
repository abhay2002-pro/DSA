#include<iostream>
#include<algorithm>

using namespace std;

int minimumCoins(int* coins, int n, int amt){
    sort(coins, coins + n, greater<int>());
    int num = 0;
    for(int i = 0; i < n; i++){
        num += amt/coins[i];
        amt %= coins[i];
        if(amt == 0){
            return num;
        }
    }
    return num;
}
int main(){
    int n = 4;
    int coins[] = {5, 10, 2 ,1};
    int amt;
    cin>>amt;
    cout<<minimumCoins(coins,n,amt)<<endl;
}

// This algorithm maybe not works always. It works good only for US and Indian currencies.
// for example if coins are 10,15,2 and thge amount is 20 then by greedy algorithm we used above the naswer would be 4 coins but the optimal answer is 2.