
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

int a,b;
cin>>a>>b;
 vector<int>v;

for(int i=1;i<=a;i++ ){
    for(int j =1;j<=b;j++){
 int ans=abs(1-i)+abs(1-j);
 int ans2=abs(a-i)+abs(b-j);
 int ans3=abs(1-i)+abs(b-j);
 int ans4=abs(a-i)+abs(1-j);

 ans=max(ans, max(ans2, max(ans3, ans4)));
 v.push_back(ans);


    }

}

sort(v.begin(),v.end());

for(int i=0;i<v.size();i++){

    cout<<v[i]<<" ";

}
cout<<endl;









}








}








