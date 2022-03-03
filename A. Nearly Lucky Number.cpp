#include<bits/stdc++.h>
using namespace std;
 int main() {
long long int num,sum=0;
cin>>num;
for(int i=0;num>0;i++){
    if(num % 10 == 7 || num % 10 == 4)
sum++;

num = num / 10;
    }


if ( sum==4 || sum==7 ){
    cout<<"YES";}
  else{ cout<<"NO";}
}


