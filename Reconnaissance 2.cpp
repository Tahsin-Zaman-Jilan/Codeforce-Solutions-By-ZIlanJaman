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

ll minm=1001,idx1,idx2;

for(int i=0;i<t;i++){

    if(abs(v[i]-v[i+1])<minm){

        minm=abs(v[i]-v[i+1]);
        idx1=i;
        idx2=i+1;

    }


}
ll dif=abs(v[0]-v[t-1]);
//cout<<dif<<endl;




if(dif<minm || t==2){

    cout<<1<<" "<<t<<endl;

}

else {
cout<<idx1+1<<" "<<idx2+1<<endl;

}



}









