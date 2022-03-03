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

vector<ll>v;
for(int i=0;i<a;i++){

    ll c;
    cin>>c;
    v.push_back(c);

}


sort(v.begin(),v.end());

ll ans=0;
ll d=a;



    for(int i=0;i<a;i++){

        if(i%2==0){
            b=b- v[a-1];
            ans++;
        }

        else {
             b=b- v[a-2];

ans++;
        }


if(b<=0){

    break;
}

    }



cout<<ans<<endl;


}











}









