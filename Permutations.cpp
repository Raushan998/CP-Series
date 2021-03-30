// I love my code ❤️
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vv(x) vector<x>
#define vv1 vector<vector<ll>>
#define rep(i, s, n) for (i = s; i < n; i++)
#define mm(x, y) map<x, y>
#define pp(x,y) pair<x,y>
#define in(x) cin >> x
#define in1(x, y) cin >> x >> y
#define in2(x, y, z) cin >> x >> y >> z
#define in3(x, y, w, z) cin >> x >> y >> w >> z
#define ou(x) cout << x << " "
#define ou1(x, y) cout << x << " " << y
#define ou2(x, y, z) cout << x << " " << y << " " << z
#define ss set<ll>
#define vv2 vector<pair<ll, ll>>
#define mm1 map<ll, vector<ll>>
#define dw cout << endl
#define w()   int t;cin >> t; while (t--)
#define it(x, m) for (auto x : m)
#define pb(v, x) v.push_back(x)
ll n,i,j,k,p,q;
using namespace std;
void solve(ll n){
    vv(ll) v;
    ll max_odd,max_even;
    if(n&1){
        max_odd=n;
        max_even=n-1;
    }
    else{
        max_odd=n-1;
        max_even=n;
    }
    for(i=max_odd;i>=1;i-=2){
        v.push_back(i);
    }
    for(i=max_even;i>=2;i-=2){
        v.push_back(i);
    }
    bool ans=false;
    rep(i,0,n-1){
        if(abs(v[i]-v[i+1])==1)
           ans=true;
    }
    if(ans)ou("NO SOLUTION");
    else{
        rep(i,0,n)ou(v[i]);
    }
}
void input(){
    cin>>n;
    solve(n);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}