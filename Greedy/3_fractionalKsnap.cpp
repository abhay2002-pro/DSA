#include <iostream>
#include <algorithm>


using namespace std;

bool myCmp(pair<int,int > p1, pair<int,int > p2){
    double r1 = (double)p1.second /p1.first;
    double r2 = (double)p2.second /p2.first;
    return r1>r2;
}

int FknapSnack( pair<int, int> *arr,int n,int W){
    sort(arr,arr + n,myCmp);

    int ans;

    for(int i=0;i<n;i++){
        if(arr[i].first<=W){
            W-=arr[i].first;
            ans+=arr[i].second;
        }
        else{
            ans += (double)arr[i].second/arr[i].first * W;
            W = 0;
            break;
        }
    }
    return ans;
}

int main(){
    pair<int, int> arr[] = {make_pair(50, 600), make_pair(20, 500), make_pair(30, 400)};
    int n = 3;
    int W = 70;
    cout<<FknapSnack(arr,n,W)<<endl;
    return 0;
}