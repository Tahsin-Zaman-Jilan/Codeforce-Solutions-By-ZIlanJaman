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



ll a,b,c,d,e,f,g;
cin>>a>>b>>c>>d>>e>>f>>g;



ll ans1=c/b;
ll ans2=a/d;







ll ans3=0,ans4=0,ans=0;

for(int i=0;i<=e;i++){

        ll A=a+(g*i);
        ll B=b+(f*(e-i));


        ans3=c/B;
        ans4=A/d;
        if(c%B!=0) ans3++;
if(A%d!=0) ans4++;


      if(ans3<=ans4){

    ans=1;
    break;

}


    }

if(ans==1){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}


}







}


















