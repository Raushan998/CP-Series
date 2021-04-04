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
    mm(ll,vv(ll)) m;
    rep(i,0,n)
       m[v[i]].push_back(i+1);
    sort(v.begin(),v.end());
    bool flag=false;
    rep(i,0,n){
        ll l=i+1,r=n-1;
        while(l<r){
            if((v[i]+v[l]+v[r])==k){
                vv(ll) res;
                if(v[i]==v[l] && v[i]==v[r]){
                    res.push_back(m[v[i]][0]);
                    res.push_back(m[v[i]][1]);
                    res.push_back(m[v[i]][2]);
                }
                else if(v[i]==v[l]){
                    res.push_back(m[v[i]][0]);
                    res.push_back(m[v[i]][1]);
                    res.push_back(m[v[r]][0]);
                }
                else if(v[i]==v[r]){
                    res.push_back(m[v[i]][0]);
                    res.push_back(m[v[i]][1]);
                    res.push_back(m[v[l]][0]);
                }
                else if(v[l]==v[r]){
                    res.push_back(m[v[l]][0]);
                    res.push_back(m[v[r]][1]);
                    res.push_back(m[v[i]][0]);
                }
                else{
                    res.push_back(m[v[i]][0]);
                    res.push_back(m[v[l]][0]);
                    res.push_back(m[v[r]][0]);
                }
                sort(res.begin(),res.end());
                cout<<res[0]<<" "<<res[1]<<" "<<res[2]<<endl;
                flag=true;
                break;
            }
            else if((v[i]+v[l]+v[r])>k)r--;
            else l++;
        }
        if(flag)break;
    }
    if(!flag)cout<<"IMPOSSIBLE";
}
void input(){
    cin>>n>>k;
    solve();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}