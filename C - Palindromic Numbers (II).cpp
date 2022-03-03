#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase,A,rem,rever=0,origin;
cin>>tcase;
for(int i=1;i<=tcase;i++){
    cin>>A;
    origin=A;

for(int j=1;A!=0;j++){


    rem=A%10;
    rever=rever*10+rem;
    A=A/10;


}
if(origin==rever){
    cout<<"Case "<<i<<":"<<" Yes"<<endl;
    }
    else{
        cout<<"Case "<<i<<":"<<" No"<<endl;
    }
rever=0;
origin=0;
rem=0;

}






}

