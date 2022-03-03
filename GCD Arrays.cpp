
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

ll l,r,k;

cin>>l>>r>>k;

ll ans=(r-l+1)-(r/2 - (l-1)/2);


if(l==1 && r==1){

    cout<<"NO"<<endl;
}
else if(ans<=k || l==r){


    cout<<"YES"<<endl;
}

else {


    cout<<"NO"<<endl;
}








}








}








