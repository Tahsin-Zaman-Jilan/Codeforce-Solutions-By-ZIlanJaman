#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
int n,m,k;
cin>>n>>m;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<int>vp(n);
set<int>s;
for(int i=n-1;i>=0;i--){
    s.insert(v[i]);
    vp[i]=s.size();
}
for(int i=0;i<m;i++){
    cin>>k;
    cout<<vp[k-1]<<"\n";
}
return 0;
}
