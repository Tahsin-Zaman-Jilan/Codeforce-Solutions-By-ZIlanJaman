#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;

while(tcase--){



int t;
cin>>t;
vector<int>v;

for(int i=0;i<t;i++){
int a;
cin>>a;
v.pb(a);

}

sort(v.begin(),v.end());


int diff=0;
for(int i=1;i<t;i++){
    diff=diff+v[i]-v[i-1];


}

cout<<diff<<endl;


}








}









