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

string  a,ans="";
cin>>a;
ll len=a.size()-1;
int ok=0;
for(int i=len;i>=0;i--){

   ll c=a[i]-'0';
   ll d=a[i-1]-'0';

    c=c+d;

   // cout<<c<<endl;
   if(c>=10){
     string e=to_string(c);

//cout<<"NOW"<<a[i]<<a[i-1]<<endl;
a[i]=e[1];
a[i-1]=e[0];
//cout<<"after"<<a[i]<<a[i-1]<<endl;
ok=1;
break;
   }

}


if(ok==0){

     ll c=a[0]-'0';
   ll d=a[1]-'0';
    c=c+d;
    a.erase(0, 2);
    //cout<<a<<endl;
 string e=to_string(c);
 e+=a;

cout<<e<<endl;

}
else{


cout<<a<<endl;

}




}








}








