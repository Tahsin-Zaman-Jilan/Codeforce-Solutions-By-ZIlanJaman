#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


ll col,q;
cin>>col>>q;


map<int,int>mp;

for(int i=0;i<col;i++){

int a;
cin>>a;

if(mp[a]==0){
mp[a]=i+1;
}
}



while(q--){


    int b;
    cin>>b;

    int ans=mp[b];

    cout<<ans<<" ";

    mp.erase(b);

    for(auto x:mp){



        if(x.second<ans){

            mp[x.first]=1+x.second;

        }

    }
    mp[b]=1;




}

cout<<endl;















}








