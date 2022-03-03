#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int a,b,ans=0,m;
cin>>a>>b;
m=a/b;
ans=ans+m;
if(ans>0){
for(;;){
 b=m/b;
 m=m/b;
 ans=ans+b;
 if(m<0){
    break;
 }

}
}


ans=ans+a;
cout<<ans;





}




