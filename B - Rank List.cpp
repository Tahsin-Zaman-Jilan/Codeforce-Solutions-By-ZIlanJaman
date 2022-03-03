#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p,pair<int,int>q){
    if(p.first==q.first) return (p.second<q.second);
    return (p.first>q.first);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase,A,prob,time,sum=0;
cin>>tcase>>A;
vector<pair<int,int>>v(tcase);
for(int i=0;i<tcase;i++){
    cin>>prob>>time;
    v[i].first=prob;
    v[i].second=time;

}
sort(v.begin(),v.end(),comp);
//int a=v.size()-A;

for(int i=0;i<tcase;i++){
    if(v[i]==v[A-1] ){
        sum++;
    }
}
    cout<<sum;









}
