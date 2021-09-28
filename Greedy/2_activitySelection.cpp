#include <bits/stdc++.h>  
 
using namespace std;

bool myCmp(pair <int, int > a, pair <int, int > b){
    return (a.second < b.second);
}

int maximumActivity(pair <int, int > arr[],int n){
    sort(arr,arr+n,myCmp);

    // for(int i = 0; i < n; i++){
    //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
    // }
    
    int cnt = 1;
    int prev = 0;
    for(int i =1; i < n; i++){
        if(arr[i].first>=arr[prev].second){
            cnt++;
            prev = i;
        }
    }
    return cnt;
}
int main()
{
    pair <int, int> arr[] = {make_pair(12, 25), make_pair(10, 20), make_pair(20, 30)};

	int n = 3;

	cout<<maximumActivity(arr, n); 
    
    return 0;
}
