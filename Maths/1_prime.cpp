// Every prime number can be represented in form of 6n+1 or 6n-1 except 2 and 3, where n is a natural number.
// Two and thee are only two consecutive natural numbers which are prime too.

#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(int n){
    int c = 2;
    while(c*c <= sqrt(n)){
        if(n%c == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(isPrime(n)){
        cout << "Prime" << endl;
    }
    else{
        cout<<"Composite" << endl;
    }
}