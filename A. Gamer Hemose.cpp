
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;

while(tcase--){


ll a,b;
cin>>a>>b;
vector<int>v;
for(int i=0;i<a;i++){

    ll c;
    cin>>c;
    v.push_back(c);


}
    ll ans;

sort(v.begin(),v.end());

ll high=v[a-1];
ll high2=v[a-2];

if(b%(high+high2)==0){

    ans= 2*(b/(high+high2));

}

else if(b%(high+high2)<=high){

    ans= 2*(b/(high+high2))+1;

}
else {

    ans= 2*(b/(high+high2))+2;

}


cout<<ans<<endl;



}








}






