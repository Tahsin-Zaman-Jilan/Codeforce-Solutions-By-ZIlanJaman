#include<bits/stdc++.h>
using namespace std;
int main(){

long long k,l,m,t,sum=0;
vector<pair<int,int>>v;
cin>>k>>l;
for(int i=0;i<l;i++){
    cin>>m>>t;
    v.push_back(make_pair(m,t));


}
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    if(k>v[i].first){
        sum++;
        k=k+v[i].second;
    }


}
//cout<<sum<<endl;
if(sum==l){
    cout<<"YES";
}
else{
    cout<<"NO";
}


}
