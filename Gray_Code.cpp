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
ll n,i,j,k,p,q,mod=1e9+7;
using namespace std;
vector<string>v;
vector<string> recurse(ll n){
    if(n==1){
        return {"0","1"};
    }
    vv(string) rec=recurse(n-1);
    vv(string) current;
    rep(i,0,rec.size()){
        current.push_back(("0"+rec[i]));
    }
    for(i=rec.size()-1;i>=0;i--){
        current.push_back("1"+rec[i]);
    }
    return current;
}
void solve(ll n){
    vv(string)v=recurse(n);
    for(auto &x:v)cout<<x<<endl;
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
/*
000
001
011
010
110
111
101
100
*/