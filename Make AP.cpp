
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

ll a,b,c,ans=0;
cin>>a>>b>>c;


if((2*b-c>0) && ((2*b-c)%a==0)){//c-b=b-am , am=(2b-c)/a
    ans=1;
}

else if((a+c)%(2*b)==0){ //m=(c+a)/2b
    ans=1;
}

else if((2*b-a>0) && (2*b-a)%c==0){

    ans=1;
}




if(ans==0){

    cout<<"NO"<<endl;

}


else {


    cout<<"YES"<<endl;
}








}








}








