#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

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

ll ncr(ll n,ll r){
    r = ll(min(int(n-r),int(r)));
    ll ret=1;
    rep(i,r){
        ret=ret*(n-i)%MOD;
        ret*=pow_mod(i+1,MOD-2);
        ret%=MOD;
    }
    if(ret<0)ret+=MOD;
    return ret;
}


int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll ans;
    ans=pow_mod(2,n);
    ans=ans-ncr(n,0)+(MOD-ncr(n,b))+(MOD-ncr(n,a));
    ans%=MOD;
    cout<<ans <<endl;
}