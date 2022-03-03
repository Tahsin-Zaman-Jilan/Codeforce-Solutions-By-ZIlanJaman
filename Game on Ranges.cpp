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


int t;
cin>>t;



int l[t],r[t];

map<pair<int,int>,int>mp;

for(int i=0;i<t;i++){

    cin>>l[i]>>r[i];

    mp[{l[i],r[i]}]=1;

}

for(int i=0;i<t;i++){
for(int j=l[i];j<=r[i];j++){

    if(l[i]==r[i]){

        cout<<l[i]<<" "<<r[i]<<" "<<j<<endl;

    }



    if((mp[{l[i],j-1}]==1)  &&  (mp[{j+1,r[i]}]==1)   ){

           cout<<l[i]<<" "<<r[i]<<" "<<j<<endl;


    }


    if(( j==l[i] && mp[{j+1,r[i] }]==1)  ||  (j==r[i] && mp[{l[i],j-1}]==1)){

         cout<<l[i]<<" "<<r[i]<<" "<<j<<endl;



    }




}



}



}








}








