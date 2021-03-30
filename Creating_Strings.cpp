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
set<string>v;
void recurse(string str,int index){
    if(index>=str.length()){
        v.insert(str);
        return;
    }
    for(ll i=index;i<str.length();i++){
        if((i==index) || (str[i]!=str[i-1])){
            swap(str[i],str[index]);
            recurse(str,index+1);
            swap(str[i],str[index]);
        }
    }
}
void solve(string str){
    recurse(str,0);
    cout<<v.size()<<endl;
    for(auto &x:v)cout<<x<<endl;
}
void input(){
    string str;cin>>str;
    solve(str);
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}