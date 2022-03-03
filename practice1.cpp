#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


ll t,ini=0;
cin>>t;
vector<ll>v;

ll maxm=0;
for(int i=0;i<t;i++){
ll a;
cin>>a;

v.pb(a);

}

for(int i=0;i<t;i++){

if(maxm<v[i]){
    maxm=v[i];
}

}


sort(v.begin(),v.end());

for(int i=0;i< t ;i++){
if(v[i]!=ini){

    if(maxm%v[i]==0){

        ini=v[i];
        v[i]=0;
    }
}

}

sort(v.begin(),v.end());

cout<<maxm<< " ";
cout<<v[t-1];







}








