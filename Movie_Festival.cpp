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
bool compare(pair<ll,ll>a,pair<ll,ll>b){
    if(a.first==b.first)
        return (a.second-a.first)<(b.second-b.first);
    return a.second<b.second;
}
void solve(){
    vector<pair<ll,ll>> v(n,{0,0});
    rep(i,0,n)cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end(),compare);
    stack<pair<ll,ll>>s;
    for(auto &x:v){
        if(s.empty()){
            s.push({x.first,x.second});
        }
        else if(s.top().second<=x.first){
            s.push(x);
        }
    }
    cout<<s.size()<<endl;
}
void input(){
    cin>>n;
    solve();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}
/*
10
404 882
690 974
201 255
800 933
525 819
457 601
461 978
832 932
699 804
795 860
*/