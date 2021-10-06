// If it is given in the question that all the number are distincts then we can use set.
// Set is implemented using BST. The time complexity of searching , inserting, deleting is log(n) in average case and O(n) in worst case.
#include<bits/stdc++.h>

using namespace std;

int kthlargest(int *arr,int n,int k){
    set<int> s(arr,arr+n);
    auto itr = s.begin();
    advance(itr,n-k);
    return *itr;
}

int main(){
    int arr[] = {2,4,3,1,5,6};
    int n = 6;
    int k = 4;
    cout<<kthlargest(arr,n,k)<<endl;
}
