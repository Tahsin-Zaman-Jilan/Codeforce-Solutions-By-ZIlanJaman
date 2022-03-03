
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


ll tcase;
cin>>tcase;

while(tcase--){


ll t;
cin>>t;
vector<ll>v;

for(int i=0;i<t;i++){
ll a;
cin>>a;
v.pb(a);

}

int ans=v[0];


for(int i=1;i<t;i++){

    ans=ans | v[i];


}
cout<<ans<<endl;








}








}









