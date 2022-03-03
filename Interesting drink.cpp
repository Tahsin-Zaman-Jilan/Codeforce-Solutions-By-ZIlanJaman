




#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



int n;
cin>>n;
    vector<int>v;
while(n--){
    int a;

    cin>>a;
    v.push_back(a);



}
sort(v.begin(),v.end());
int b;
cin>>b;
int ans;
while(b--){

    int c;
    cin>>c;
ans=upper_bound(v.begin(),v.end(),c)-v.begin();

 cout<<ans<<endl;


    }




}











