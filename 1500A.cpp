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
    ll n,i,j;
    cin>>n;
    ll* arr=new ll[n];
    for(i=0;i<n;i++)cin>>arr[i];
    unordered_map<ll,pair<ll,ll>> m1;
    for(i=0;i<min(n,(ll)4000);i++){
        for(j=i+1;j<min(n,(ll)4000);j++){
            ll sum=arr[i]+arr[j];
            // checking whether the element present in the hashmap or not 👍
            if(m1.find(sum)!=m1.end()){   
                int index1=m1[sum].first,index2=m1[sum].second;
                if( i==index1 || j==index1 || i==index2 || j==index2)continue;
                else{
                    cout<<"YES"<<endl;
                    cout<<(index1+1)<<" "<<(index2+1)<<" "<<i+1<<" "<<j+1<<endl;
                    return 0;
                }
            }
            else
               m1[sum]={i,j};
        }
    }
    cout<<"NO"<<endl;
    return 0;
}