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
ll count1=0;
vv(ll) ndiag(19,0),rdiag(19,0),Col(19,0);
void solve(vector<vector<char>>&v,ll row){
    if(row>=8){
        count1++;
        return;
    }
    for(ll col=0;col<8;col++){
        if(ndiag[row+col]!=1 && rdiag[row-col+7]!=1 && 
                       Col[col]!=1 && v[row][col]!='*' && v[row][col]!='q'){
                ndiag[row+col]=1;
                Col[col]=1;
                rdiag[row-col+7]=1;
                v[row][col]='q';
                solve(v,row+1);
                ndiag[row+col]=0;
                Col[col]=0;
                rdiag[row-col+7]=0;
                v[row][col]='.';
        }
    }
}
void input(){
    vector<vector<char>>v(8,vector<char>(8,'.'));
    rep(i,0,8){
        rep(j,0,8)cin>>v[i][j];
    }
    solve(v,0);
    cout<<count1<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}