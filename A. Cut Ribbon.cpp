#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int sum=0,coun=0,n,a,b,c,target,ans=0;
cin>>n;
cin>>a>>b>>c;
vector<int>v;
vector<int>pref(3);
v.push_back(a);
v.push_back(b);
v.push_back(c);
pref[0]=v[0];
for(int i=1;i<3;i++){
    pref[i]=pref[i-1]+v[i];
}

map<int,int>mp;
mp[0]=1;
for (int r=0;r<3;r++){
    target=pref[r]-n;

    if(mp.count(target)>0){
        ans+=mp[target];
    }

    mp[pref[r]]++;
}
cout<<ans;



}
