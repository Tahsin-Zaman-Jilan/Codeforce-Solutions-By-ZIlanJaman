#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int tcase;

cin>>tcase;
while(tcase--){
    int t;
    cin>>t;
    int dig=t%10;
string num=to_string(t);
int len=num.size();
  // cout<<length<<endl;
    int ans=10*(dig-1)+len*(len+1)/2;
cout<<ans<<endl;

}





}







