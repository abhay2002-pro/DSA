#include<iostream>

using namespace std;

int gcd(int x, int y){
    if(x==0){
        return y;
    }
    return gcd(y%x, x);
}

int main(){
    cout<<gcd(1,4);
}

// Euclid algorithm
// Time complexity = O(Log min(x, y)) 
// GCD of two numbers a and b is the minimum positive value of the expression ax+by
// GCD of two numbers a and b is the maximum side of a square that can be used to fill the rectangle of dimensions a * b.