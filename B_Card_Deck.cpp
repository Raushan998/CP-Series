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
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    w(){
        ll n,i=0,count,index,max_element=-1;cin>>n;
        vv(ll) v(n,0);
        rep(i,0,n)cin>>v[i];
        mm(ll,ll) m;
        rep(i,0,n){
            if(max_element==-1){
                m[v[i]]={i};
                max_element=v[i];
            }
            else if(max_element<v[i]){
                m[v[i]]={i};
                max_element=v[i];
            }
            else{
                m[v[i]]=m[max_element];
            }
        }
        // for(auto &x:m)cout<<x.first<<" "<<x.second<<endl;
        for(ll index=n-1;index>=0;){
            max_element=-1;
            ll current_index=0,val;
            current_index=m[v[index]];
            // cout<<current_index<<endl;
            val=current_index;
            for(current_index=current_index;current_index<=index;current_index++){
                cout<<v[current_index]<<" ";
            }
            index=val-1;
        }
        cout<<endl;
    }
    return 0;
}