#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase,t,a;
cin>>tcase;
while(tcase--){

    cin>>t;

   int d=0;
    for(int i=0;i<t;i++){
            cin>>a;

            if(a<0){

d=1;
            }
    }
    if(d==1){
        cout<<"NO"<<endl;
    }

else{
    cout<<"YES"<<endl;
    cout<<101<<endl;
    for(int i=0;i<101;i++){

        cout<<i<<" ";
    }
    cout<<endl;


}





}



}

