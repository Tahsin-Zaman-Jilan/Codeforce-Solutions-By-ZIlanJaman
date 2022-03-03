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

ll ans1=0,ans2=0;
if (c%(f+b)==0){
    ans1=c/(f+b);
}

else {
   ans1=c/(f+b)+1;
}


if(a%d==0){
    ans2=a/d;

}


else{
     ans2=a/d+1;


}
cout<<"ans1 "<<ans1<<" ans2 "<<ans2<<endl;


if(ans1<ans2 || ans1==ans2){

    cout<<"YES"<<endl;
    continue;
}



if (c%b==0){
    ans1=c/(b);
}

else {
   ans1=(c/b)+1;
}


if((a+g)%d==0){
    ans2=(a+g)/d;

}


else{
     ans2=(a+g)/d+1;


}



if(ans1<ans2 || ans1==ans2){

    cout<<"YES"<<endl;

}

else {
      cout<<"NO"<<endl;
}




cout<<"ans1 "<<ans1<<" ans2 "<<ans2<<endl;



}








}









