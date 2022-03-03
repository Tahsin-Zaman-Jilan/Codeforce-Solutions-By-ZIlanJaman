#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase,t,A,sum=0;
cin>>tcase;
while(tcase--){
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>A;
        if(A==0){
            sum++;
        }


    }

    if(sum==2){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
    sum=0;

}





}

