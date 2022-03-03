#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);




int tcase;
cin>>tcase;
while(tcase--){

    int a,b;
    cin>>a>>b;

    int ans;
    if(b/2<a){

        ans=b%a;

    }

    else {


            ans=b/2;

            ans=ans+1;
            ans=b%ans;







    }


    cout<<ans<<endl;

}



}





