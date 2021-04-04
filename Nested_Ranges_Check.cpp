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
bool compare(pair<ll,ll>a,pair<ll,ll>b){
    if(a.first==b.first)return a.second>b.second;
    return a.first<b.first;
}
pair<ll,ll> Search(vector<pair<ll,ll>>&v,pair<ll,ll>element,ll start,ll end){
      pair<ll,ll> ans={-1,-1};
      while(start<=end){
          ll mid=(start+end)/2;
          if((v[mid].first<=element.first && 
                       v[mid].second>=element.second)){
              return v[mid];
          }
          else if(v[mid].first>element.first){
              end=mid-1;
          }
          else start=mid+1;
      }
      return ans;
}
void solve(){
    vector<pair<ll,ll>>v(n,{0,0});
    rep(i,0,n)cin>>v[i].first>>v[i].second;
    map<pair<ll,ll>,ll> m;
    rep(i,0,n){
        m[v[i]]=i;
    }
    sort(v.begin(),v.end(),compare);
    vector<ll>v1(n,0),v2(n,0);
    rep(i,0,n){
        pair<ll,ll>ans=Search(v,v[i],0,i-1);
        pair<ll,ll>ans1=Search(v,v[i],i+1,v.size()-1);
        if(ans.first==-1 && ans.second==-1 && ans1.first==-1 && ans1.second==-1)continue;
        else{
            if(ans.first==-1 && ans.second==-1){
                ll index=m[ans1];
                v1[index]=1;
                index=m[v[i]];
                v2[index]=1;
            }
            else if(ans1.first==-1 && ans1.second==-1){
                ll index=m[ans];
                v1[index]=1;
                index=m[v[i]];
                v2[index]=1;
            }
            else{
                ll index=m[ans1];
                v1[index]=1;
                index=m[v[i]];
                v2[index]=1;
                index=m[ans];
                v1[index]=1;
                index=m[v[i]];
                v2[index]=1;
            }
        }
    }
    rep(i,0,n)cout<<v1[i]<<" ";
    cout<<endl;
    rep(j,0,n)cout<<v2[j]<<" ";
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