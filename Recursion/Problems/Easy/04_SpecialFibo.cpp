/* Sankalp recently learned Fibonacci numbers and now he is studying different algorithms to find them. After getting bored of reading them, he came with his own new type of numbers. He defined them as follows:

 f(0) = a;
 f(1) = b;
 f(n) = f(n-1) ^ f(n-2);  */

 #include <bits/stdc++.h>  
  
 using namespace std;
  
 typedef long long ll;
 ll MOD = 998244353;
 double eps = 1e-12;
 #define forn(i,e) for(ll i = 0; i < e; i++)
 #define forsn(i,s,e) for(ll i = s; i < e; i++)
 #define rforn(i,s) for(ll i = s; i >= 0; i--)
 #define rforsn(i,s,e) for(ll i = s; i >= e; i--)
 #define ln "\n"
 #define dbg(x) cout<<#x<<" = "<<x<<ln
 #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 #define all(x) (x).begin(), (x).end()
 #define sz(x) ((ll)(x).size())
 const int M=1e9+7;
 long long mod(long long x){
   return ((x%M + M)%M);
 }
 long long add(long long a, long long b){
   return mod(mod(a)+mod(b));
 }
 long long mul(long long a, long long b){
  return mod(mod(a)*mod(b));
 }
  
 int specfibo(int a,int b,int n){
     if(n==0){
         return a;
     }
     if(n==1){
         return b;
     }
     if(n==3){
         return a^b;
     }
     return specfibo(a,b,n-1)^specfibo(a,b,n-2);
 }
 void solve(){
    int a,b,n;
    cin>>a>>b>>n;
    cout<<specfibo(a,b,n);
 }
 int main()
 {
     fast_cin();
     ll t;
     cin >> t;
     for(int it=1;it<=t;it++) {
         solve();
     }
     return 0;
 }
