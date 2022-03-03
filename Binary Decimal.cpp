#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase;
cin>>tcase;

while(tcase--){
    int t,rem,ans,maxm=0;
    cin>>t;
while(t>0){
    rem=t%10;
    t=t/10;
    if(maxm<rem){
    maxm=rem;
    }
}
cout<<maxm<<endl;

}


}




