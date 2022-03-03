#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase;
cin>>tcase;
while(tcase--){
    long long t,a;
    cin>>t;

    if(t<=6){
         a=15;

    }
    else{

        if(t%2!=0){
            t++;

        }

        a=(t*5)/2;

    }



    cout<<a<<endl;

}






}






