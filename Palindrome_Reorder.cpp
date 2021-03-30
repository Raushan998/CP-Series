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
bool compare(pair<char,int>a,pair<char,int>b){
    if(a.second==b.second)return a.first>b.first;
    return a.second<b.second;
}
bool compare1(pair<char,int>a,pair<char,int>b){
    if(a.second==b.second)return a.first<b.first;
    return a.second>b.second;
}
bool check(string str){
    mm(char,int) m;
    for(auto &x:str)m[x]++;
    int count=0;
    for(auto &x:m)if(x.second&1)count++;
    return count<=1;
}
void solve(string str){
      vector<pair<char,ll>>v(26,{'x',0});
      for(auto &x:str){
          ll temp=v[x-65].second;
          v[x-65]={x,temp+1};
      }
      string res="";
      ll index=-1;
      sort(v.begin(),v.end(),compare1);
      rep(i,0,26){
          if(v[i].second%2==0 && v[i].second!=0){
              ll temp=v[i].second/2;
              char val=v[i].first;
              while(temp--){
                  res+=v[i].first;
              }
               
          }
          else if(v[i].second&1)
              index=i;
      }
      while(index!=-1 && v[index].second>0){
          res+=v[index].first;
          v[index].second--;
      }
      sort(v.begin(),v.end(),compare);
      rep(i,0,26){
          if(v[i].first!='x' && v[i].second%2==0 && v[i].second!=0){
              v[i].second/=2;
              while(v[i].second--)res+=v[i].first;
          }
      }
      if(check(str))
        cout<<res<<endl;
      else
        cout<<"NO SOLUTION"<<endl;
}
void input(){
    string str;
    cin>>str;
    solve(str);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    return 0;
}