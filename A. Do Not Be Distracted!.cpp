#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase, t,a=0,b=0;
string str;
cin>>tcase;
while(tcase--){
cin>>t;
cin>>str;
if(t>=3){
for(int i=0,j=1;i<t,j<=t;j++){
    if(str[i]==str[j] && a!=0){
        cout<<"NO"<<endl;
        a=0;
    }
    else if(str[i]!=str[j]){
        a=a+1;
    }
 if(j==t){
    i++;
 }

    if(str.size()==i+1 && a==0){
        cout<<"YES"<<endl;
    }
}
//DDBBCCCBBEZ

}
else{
    cout<<"YES"<<endl;
}





}

}


