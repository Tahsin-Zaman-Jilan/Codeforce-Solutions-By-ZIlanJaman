#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

   int T;

  cin>>T;
  for(int i=1;i<=T;i++){
        int M,N;
 cin>>M>>N;
  set< long long int>vt;
    for(int j=0;j<M;j++){
        long long int A;
        cin>>A;
         vt.insert(A);}

       for(int k=0;k<N;k++){
            long long int A;
           cin>>A;


        if( vt.count(A)>0){

            cout<<"YES\n";
        }
        else {

            cout<<"NO\n";

               vt.insert(A);
               }




        }
    }
  }


