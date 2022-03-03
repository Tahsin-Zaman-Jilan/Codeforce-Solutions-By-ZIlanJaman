#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


ll a,b;
cin>>a>>b;



vector<ll>v;

for(int i=0;i<a;i++){
ll a;
cin>>a;
v.pb(a);

}




ll ans=0;
for(ll i=0;i<a-1;i++){


        ans=max((v[i]-v[i+1]-b),ans);
       // cout<<v[i]<<endl;



}


cout<<ans<<endl;





}









