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
ll n,i,j,k,p,q,m,mod=1e9+7;
using namespace std;
ll count1=0;
void solve(vv(ll) v,set<pair<ll,ll>>s){
    rep(i,0,v.size()){
        ll num=v[i];
        num++;
        auto it=s.lower_bound({num,0});
        if(it==s.begin()){
            cout<<-1<<endl;
        }
        else{
            --it;
            cout<<(*it).first<<endl;
            s.erase(it);
        }
    }
}
void input(){
    cin>>n>>m;
    set<pair<ll,ll>>s;
    vv(ll) v(m,0);
    rep(i,0,n){
        ll num;cin>>num;
        s.insert({num,i});
    }
    rep(i,0,m)cin>>v[i];
    solve(v,s);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}