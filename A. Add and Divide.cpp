#include<bits/stdc++.h>
using namespace std;
int main(){
     ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


long long tcase,A,B,sum=0;
cin>>tcase;
while(tcase--){

    cin>>A>>B;
    for(int i=0;A>0;i++){
    if(A%B==0){
        B++;
        sum++;
    }
    else{
        A=A/B;
        sum++;
    }
    }
    cout<<sum<<"\n";
    sum=0;
}
}
//50000000 4
