#include<iostream>
#include<string>

using namespace std;

char firstUppercase(string s,int index){
    if(s[index] >= 'A' && s[index] <= 'Z'){
        return s[index];
    }
    else{
        return firstUppercase(s,index+1);
    }
}

int main(){
    string str = "abHaY";
    cout<<firstUppercase(str,0);
}