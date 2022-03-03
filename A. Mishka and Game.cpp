#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase,a,b,miskha=0,chris=0;
cin>>tcase;
while(tcase--){

    cin>>a>>b;
    if(a>b){
        miskha++;
    }
    else if(a<b ){
        chris++;}



    }
    if(miskha>chris){
        cout<<"Mishka";
       }
       else if(chris>miskha){
       cout<<"Chris";
       }
       else{
        cout<<"Friendship is magic!^^";
       }

}










