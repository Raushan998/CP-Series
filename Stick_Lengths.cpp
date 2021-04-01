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
void solve(){
    vv(ll) v(n,0);
    rep(i,0,n)cin>>v[i];
    sort(v.begin(),v.end());
    vv(ll) arr(n,0);
    arr[0]=v[0];
    rep(i,1,n)
       arr[i]=arr[i-1]+v[i];
    ll min_element=1e18;
    rep(i,0,n){
        if(i>0 && i<n-1){
            ll a=(n-1-i)*v[i];
            ll b=arr[n-1]-arr[i];
            ll c=arr[i-1];
            ll d=i*v[i];
            min_element=min(min_element,abs(a-b)+abs(c-d));
        }
        else if(i==0){
            ll a=(n-1-i)*v[i];
            ll b=arr[n-1]-arr[i];
            min_element=min(min_element,abs(a-b));
        }
        else if(i==n-1){
            ll c=arr[i-1];
            ll d=i*v[i];
            min_element=min(min_element,abs(c-d));
        }
    }
    cout<<min_element<<endl;
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