#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



ll t;
cin>>t;
vector<ll>v;

for(int i=0;i<t;i++){
ll a;
cin>>a;
v.pb(a);

}


int minx=v[t-1],it;

for(int i=1;i<t-1;i++){

    int ans=v[i+1]-v[i];

    if(ans<minx){


        minx=ans;
        it=i;
    }




}
 v.erase(v.begin()+6);

 int len=v.size();
int maxm=0;
 for(int i=1;i<len;i++){


    if(v[i]-v[i-1]>maxm){


        maxm=v[i]-v[i-1];
    }


 }


 cout<<maxm<<endl;



}









