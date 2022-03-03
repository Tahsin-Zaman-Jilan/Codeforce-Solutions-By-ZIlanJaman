#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;

for(int k=0;k<tcase;k++){

long long d=0;
long long  a,b;

cin>>a>>b;




    if(b%4==1){
            d=-b;


    }

    else if(b%4==2){
        d=d+1;

    }

    else if(b%4==3){
        d=b+1;


    }

   if(a&1){  // returns true if a is odd. a%2==1 returns wrong ans for negative values.

    cout<<a-d<<endl;
   }
   else {
    cout<<a+d<<endl;
   }



}
}






















