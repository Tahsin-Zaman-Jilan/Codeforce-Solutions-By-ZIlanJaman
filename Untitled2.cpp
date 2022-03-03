#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
     int n,m,r,c;
     cin>>n>>m>>r>>c;
     char a[n][m];
     for(int i=0;i<n;++i){
      for(int j=0;j<m;++j){
       cin>>a[i][j];
      }
     }
     r-=1;c-=1;
     int sum=n-r+m-c;
     sum-=1;
     assert(t+m+n<199);
     if(a[r][c]=='B'){cout<<0<<'\n';continue;}
     bool white=true;
     for(int i=0;i<n;++i){
      for(int j=0;j<m;++j){
       if(a[i][j]=='B'){white=false;}
      }
     }
     if(white){cout<<-1<<'\n';}
     else if(a[r][c]=='W'){
      bool black=false;
      for(int i=0;i<n;++i){
       if(a[i][c]=='B'){black=true;}
      }
      for(int j=0;j<m;++j){
       if(a[r][j]=='B'){black=true;}
      }
      if(!black||sum=='B'){cout<<2<<'\n';}
      else{cout<<1<<'\n';}
     }
    }
}
