#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase,a,b,c,d,e,f;
cin>>tcase;

while(tcase--){
    int ans;
    cin>>a>>b;
     cin>>c>>d;
      cin>>e>>f;

      ans=abs(a-c)+abs(b-d);

      if(a==c){

        if(a==e && f>=min(b,d) && f<=max(b,d) ){
            ans=ans+2;

        }
      }
        else if(b==d){
            if(b==f && e>=min(a,c) && e<=max(a,c) ){

                ans=ans+2;
            }


        }
         cout<<ans<<endl;

      }











}





