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
ll c;
cin>>c;
v.pb(c);

}
vector<ll>v1;
for(int i=0;i<b;i++){

    ll c;
    cin>>c;
v1.pb(c);
}


sort(v.begin(),v.end());
sort(v1.begin(),v1.end());

ll first=v[0];
ll check=v1[0];

ll last=v[a-1];


int ans=max(2*first,last);

 if(ans<check ){


    cout<<ans<<endl;

}



else {


    cout<<-1<<endl;
}












}









