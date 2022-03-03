#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase,days,i_day,sum=0,ans=0;
cin>>tcase>>days;
vector<pair<int,int>>v(tcase);
for(int i=0;i<tcase;i++){
    cin>>i_day;
    v[i].first=i_day;
    v[i].second=(i+1);
}
sort(v.begin(),v.end());

for(int i=0;i<v.size();i++){
    sum=sum+v[i].first;

    if(sum>days){

        break;
    }
    ans++;
}

    cout<<ans<<endl;
    for( int i=0;i<ans;i++){
        cout<<v[i].second<<" ";
    }
}












