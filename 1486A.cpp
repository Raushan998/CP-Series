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
        ll i,n;cin>>n;
        ll* arr=new ll[n];
        rep(i,0,n)cin>>arr[i];
        ll carry=0;
        rep(i,0,n){
            if(arr[i]>i){
                carry+=(arr[i]-i);
                arr[i]=i;
            }
            else if(arr[i]<i){
                carry-=(i-arr[i]);
                arr[i]=i;
            }
            if(carry<0)break;
        }
        if(carry<0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}