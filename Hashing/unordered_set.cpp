// Unordered set and unordered map are based upon hashing.

#include<iostream>
#include<unordered_set>

using namespace std;

int main(){

    unordered_set<int> s = {2,3,4,3,1};

    // Set contains only unique values.

    unordered_set<int> :: iterator it;
    // auto it

    for(it = s.begin(); it != s.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<"\n";

    if(s.find(0)==s.end()){
        cout<<"Not in the set!\n";
    }
    else{
        cout<<"Yup! I ma here\n";
    }
} 