#include<bits/stdc++.h>
using namespace std;

 int main(){
 long long int N,K,m,ans;
cin>>N>>K;
if (K==1){

    ans=N-1;
}
else if(K==0){ ans=0;}

else {
  m=N-4;
if(m%K==0 && N>1){
     ans=2+m/K ;
    }
    else{
      ans=2+1+m/K  ;
    }
}
cout<<ans<<endl;

 }
