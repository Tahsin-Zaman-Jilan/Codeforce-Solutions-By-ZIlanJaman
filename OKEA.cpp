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


int a,b;
cin>>a>>b;


if(b==1){

cout<<"YES"<<endl;
    for(int i=1;i<=a;i++){

        cout<<i<<endl;

    }
    continue;

}


if(a%2!=0  ){


    cout<<"NO"<<endl;
}



else{
cout<<"YES"<<endl;
int ans=1;

for(int i=1;i<=a;i++){



    for(int j=1;j<=b;j++){

        cout<<ans<<" ";
        ans+=2;

    }

    cout<<endl;

    if(i==(a+1)/2){

    ans=2;

    }

}
















}








}
}








