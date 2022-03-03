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
char v[a][b];
     for(int i=0;i<a;++i){
      for(int j=0;j<b;++j){
       cin>>v[i][j];
      }
     }

 cout<<v[c-1][d-1]<<endl;

}

}
