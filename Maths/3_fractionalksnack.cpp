#include <bits/stdc++.h>  

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    double r1 = (double)a.first/a.second;
    double r2 = (double)b.first/b.second;

    return r1>r2;
}

double fractionKSnap(pair<int,int> arr[],int n,int w){
    sort(arr,arr+n,cmp);
    double total = 0;
    for(int i=0;i<n;i++){
        if(arr[i].second <= w)
		{
			total += arr[i].first;

			w = w - arr[i].second;
		}
		else
		{
			total += arr[i].first * ((double) w / arr[i].second);

			break;
		}
    }
    return total;
}

int main(){
    pair<int,int> arr[] = {make_pair(120,30),make_pair(100,20),make_pair(60,10)};
    int n= 3, w = 50;
    cout<<fractionKSnap(arr,n,w);
}