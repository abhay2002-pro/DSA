/*
Given an array of integers, print a sum triangle from it such that the first level has all array elements. From then, at each level number of elements is one less than the previous level and elements at the level is be the Sum of consecutive two elements in the previous level. 
*/

#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> v){
    if(v.size() == 1){
        cout<<v[0]<<endl;
        return;
    }
    vector<int> v1;
    for (int i=0; i<(v.size()-1); i++){
        v1.push_back(v[i]+v[i+1]);
    }
    printArray(v1);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v = {1,2,3,4,5};
    printArray(v);
}