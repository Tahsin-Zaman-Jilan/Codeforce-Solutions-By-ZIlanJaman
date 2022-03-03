#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;

while(tcase--){

int t;
cin>>t;

int  cnt=0,cnt1=0;

for(int i=0;i<t;i++){
    int  arr;
    cin>>arr;
    if(arr==1){
        cnt++;

    }
    else if(arr==0 ){
        cnt1++;

    }



}




cout<<(1ll<<cnt1) * (long long) cnt<<endl;


}








}







