#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


ll t;
cin>>t;
vector<pair<int,int>>v;

for(int i=1;i<=t;i++){
ll a;
cin>>a;
v.pb(make_pair(a,i));

}

sort(v.begin(),v.end());


for(int i=0;i<t;i++){

    cout<<v[i].second<<" ";

}










}

















