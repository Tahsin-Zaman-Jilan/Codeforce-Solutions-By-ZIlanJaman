#include<bits/stdc++.h>
#define ll long long
#define vll vector <long long>
#define pi 2*acos(0.0)
using namespace std;
const int mod =  1000000007;


void solve(){
    int num;
    cin>>num;
    ll sum = 0;
    for(int i = 0;i<num;i++){
        int j;
        cin>>j;
        sum+= j;
    }
    if(sum%5==0) cout<<(sum/5)<<endl;
    else{
        sum = (sum+(5-(sum%5))+1)/5;
        cout<<sum<<endl;
    }



}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
