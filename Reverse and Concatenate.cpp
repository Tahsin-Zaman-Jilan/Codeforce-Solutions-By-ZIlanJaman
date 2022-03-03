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



ll t,k;
string str;
cin>>t>>k>>str;

ll len=t-1,ok=1;

for(int i=0;i<t;i++){


    if(str[i]!=str[len]){
    ok=0;
    break;

    }
    len--;
}


if(ok==1 || k==0){

    cout<<1<<endl;
}

else {


    cout<<2<<endl;
}


}








}









