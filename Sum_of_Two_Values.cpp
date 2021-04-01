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
int Search(vector<pair<ll,ll>>&v1,int element,int index){
    int ans=-1;
    int start=index,end=n-1;
    while(start<=end){
        ll mid=(start+end)/2;
        if(v1[mid].first==element)
            return mid;
        else if(v1[mid].first<element)
            start=mid+1;
        else end=mid-1;
    }
    return -1;
}
void solve(){
    vector<pair<ll,ll>> v1(n,{0,0});
    rep(i,0,n){
        cin>>v1[i].first;
        v1[i].second=i;
    }
    sort(v1.begin(),v1.end());
    rep(i,0,n){
        ll index=Search(v1,target-v1[i].first,i+1);
        if(index!=-1){
            cout<<min(v1[i].second,v1[index].second)+1<<" "<<max(v1[i].second,v1[index].second)+1<<endl;
            return;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    
}
void input(){
    cin>>n>>target;
    solve();
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}