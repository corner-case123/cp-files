#include<bits/stdc++.h>
#define ll long long 
#define ff first
#define ss second 
#define ln '\n'
using namespace std;


void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

void solve(){
    ll  n ,k ;
    cin >>  n >> k ; 
    vector<ll> v(n) ;
    for(auto &x :v) cin >> x; 
    sort(v.begin(),v.end()) ;
    while(k--){
        ll ix = -1 ;
        ll x ; cin >> x ; 
        ll l = 0 , r = n-1 ;
        while(l<=r){
            ll  mid = (l+r)/2 ;
            if (v[mid] <= x){
                ix = mid ; 
                l = mid + 1 ; 
            }
            else {
                r = mid -1 ;
            }
        }
        cout << ix + 1 << endl ;
    }
    return ;
}
int main(){
    ll t =1 ;//
    //cin >> t ;
    while(t--) solve() ;
    return 0 ;
}