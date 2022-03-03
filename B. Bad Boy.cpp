#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);


void solve(){
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    if(i<=n/2 && j<=m/2){
        cout<<"1 "<<m<<" "<<n<<" 1"<<endl;
    }
    else if(i>=n/2 && j>=m/2){
        cout<<"1 "<<m<<" "<<n<<" 1"<<endl;
    }
    else{
        cout<<"1 1 "<<n<<" "<<m<<endl;
    }

}

int main(){
    FAST1;
    FAST2;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
