#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

ll maxll(ll a,ll b){
    if(a>b)return a;
    return b;
}
ll MOD=1000000007;
// ll MOD=998244353;
// https://algo-logic.info/calc-pow/
ll pow_mod(ll x, ll n) {
    ll ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * x % MOD;  
        x = x * x % MOD;
        n >>= 1;
    }
    return ret;
}

int main(){
    ll a,b;
    cin>>a>>b ;
    cout<<maxll(a,b) <<endl;
}