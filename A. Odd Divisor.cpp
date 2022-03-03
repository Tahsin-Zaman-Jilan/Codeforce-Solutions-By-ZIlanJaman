#include<bits/stdc++.h>
using namespace std;
int main(){
  long long tcase,A;
  cin>>tcase;
  for(int i=0;i<tcase;i++){
    cin>>A;
    if (A%2==1 && A<1){
        cout<<"YES"<<endl;
        break;

    }
    else{
        for(int j=3;;j+=2){
            if(A%j==0){
                cout<<"YES"<<endl;
            break;
            }
        }
                 cout<<"NO"<<endl;


    }
  }



         }
