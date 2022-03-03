
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



int a,b,c,d;
cin>>a>>b>>c>>d;
vector<string>v;
     for(int i=0;i<a;++i){
      string str;
      cin>>str;
      v.push_back(str);
     }
int ans=-1;



for(int i=0;i<a;++i){
      for(int j=0;j<b;++j){
       if(v[i][j]=='B'){ans=0;}
      }
     }



for(int i=0;i<a;++i){
       if(v[i][d-1]=='B'){ans=1;}
      }
      for(int j=0;j<b;++j){
       if(v[c-1][j]=='B'){ans=1;}
      }

if(v[c-1][d-1]=='B'){

        cout<<0<<endl;}


else if(ans==-1  ){

    cout<<-1<<endl;
}



else if( ans==1){

    cout<<1<<endl;
}


else {
    cout<<2<<endl;
}











}








}









