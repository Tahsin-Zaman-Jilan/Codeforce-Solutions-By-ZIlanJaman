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

int t;


cin>>t;




int check=sqrt(t/2);
int check2=sqrt(t/4);

int test=check*check;


int test1=check2*check2;

if(t%2==0 && test==t/2){


    cout<<"YES"<<endl;
}

else if(t%4==0 && test1==t/4){


    cout<<"YES"<<endl;
}


else {


    cout<<"NO"<<endl;
}







}








}









