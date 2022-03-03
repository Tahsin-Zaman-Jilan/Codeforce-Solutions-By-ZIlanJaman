#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


ll n,m;
cin>>n>>m;


vector<ll>v;
int sum=0;
for(int i=0;i<n;i++){
ll a;
cin>>a;
v.pb(a);
}


sort(v.begin(),v.end());

for(int i=0;i<n  ;i++){

if(v[i]<0 && m>0){
    sum+=abs(v[i]);
    m--;


}
}


cout<<sum<<endl;










}


















