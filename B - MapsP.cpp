
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase,A,C;
string B;
cin>>tcase;
map<string,int>m;
for(int i=0;i<tcase;i++){
    cin>>A>>B;
   if(A==1){

   cin>>C;
   m[B]+=C;
}
else if(A==2){
   m[B]=0;
    }

    else{
      cout<<m[B]<<endl;
       }






}
}
