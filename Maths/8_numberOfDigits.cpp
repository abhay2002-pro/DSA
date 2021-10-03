#include<iostream>
#include<math.h>

using namespace std;

int countDigits(int n){
    return floor(log10(n))+1;
}

int main(){
    int n;
    cin>>n;
    cout<<countDigits(n);
}