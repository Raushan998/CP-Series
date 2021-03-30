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
#define ou2(x, y, z) cout << x << " " << y << " "<< z
#define ss set<ll>
#define vv2 vector<pair<ll, ll>>
#define mm1 map<ll, vector<ll>>
#define dw cout << endl
#define w()   int t;cin >> t; while (t--)
#define it(x, m) for(auto x : m)
#define pb(v, x) v.push_back(x)
ll n,i,j,k,p,q;
using namespace std;
vv(ll) v;
bool flag=false;
void solve(ll n){
    ll sum=(n*(n+1))/2;
    if(sum&1){
        cout<<"NO";
        return;
    }
    else{
        set<ll>s1,s2;
        for(ll i=n;i>=1;i--){
            s1.insert(i);
        }
        sum/=2;
        // cout<<sum<<endl;
        for(ll i=n;i>=1;i--){
            if(s1.find(sum)!=s1.end()){
                s2.insert(sum);
                s1.erase(sum);
                break;
            }
            else{
                s2.insert(i);
                s1.erase(i);
            }
            sum-=i;
        }
        cout<<"YES"<<endl;
        cout<<s1.size()<<endl;
        for(auto &x:s1)cout<<x<<" ";
        cout<<endl;
        cout<<s2.size()<<endl;
        for(auto &x:s2)cout<<x<<" ";
        cout<<endl;
    }
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