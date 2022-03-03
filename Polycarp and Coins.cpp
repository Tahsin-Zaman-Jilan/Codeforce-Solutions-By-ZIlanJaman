#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;
while(tcase--){
    int t,ans;
    cin>>t;



    if(t%3==0){
        ans=t/3;

        cout<<ans<<" "<<ans<<endl;
    }
    else{
        ans=t/3;
        int ans2=ans+1;
        if(ans+ans2*2==t){
        cout<<ans<<" "<<ans2<<endl;
        }
        else{
             cout<<ans2<<" "<<ans<<endl;
        }

    }


}





}






