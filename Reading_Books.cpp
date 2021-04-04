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
ll n,i,j,k,p,q,m,target,mod=1e9+7;
using namespace std;
ll count1=0;
bool isValid(ll mid,vv(ll) v,ll k){
    ll sum=0,count=0;
    rep(i,0,n){
        sum+=v[i];
        if(sum>mid){
            count++;
        }
    }
    return count<=k;
}
void solve(){
    vv(ll) v(n,0);
    k=2;
    rep(i,0,n)cin>>v[i];
    ll start=0,end=1e18,ans=0;
    while(start<=end){
        ll mid=(start+end)/2;
        if(isValid(mid,v,k)){
            ans=mid;
            end=mid-1;
        }
        else start=mid+1;
    }
    cout<<ans<<endl;
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