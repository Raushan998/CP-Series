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
vv(ll) ndiag(19,0),rdiag(19,0),Col(19,0);
int Search(ll element,vv(ll)& v2,ll k,ll index){
    ll start=index,end=v2.size()-1,ans=-1;
    while(start<=end){
        ll mid=(start+end)/2;
        if(v2[mid]<=(element+k) && v2[mid]>=element-k){
            ans=mid;
            end=mid-1;
        }
        else if(v2[mid]<element-k)
            start=mid+1;
        else 
            end=mid-1;
    }
    return ans;
}
void solve(vv(ll)& v1,vv(ll)& v2,ll k){
    sort(v2.begin(),v2.end());
    ll index=0,prevIndex=0;
    rep(i,0,v1.size()){
        index=Search(v1[i],v2,k,index);
        if(index==-1)
          index=prevIndex;
        else{
            count1++;
            index=index+1;
            prevIndex=index;
        }
    }
    cout<<count1<<endl;
}
void input(){
    cin>>n>>m>>k;
    vv(ll) v1(n,0),v2(m,0);
    rep(i,0,n)cin>>v1[i];
    rep(i,0,m)cin>>v2[i];
    sort(v1.begin(),v1.end());
    solve(v1,v2,k);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}