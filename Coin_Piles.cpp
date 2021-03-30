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
void solve(ll left,ll right){
   ll temp=min(left,right);
   right=max(left,right);
   left=temp;
   if((2*left)<right){
       cout<<"NO"<<endl;
   }
   else{
       left%=3,right%=3;
       if(left>right)swap(left,right);
       if((left==0 && right==0) || (left==1 && right==2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
   }
}
void input(){
    cin>>n;
    while(n--){
        ll left,right;cin>>left>>right;
        solve(left,right);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}