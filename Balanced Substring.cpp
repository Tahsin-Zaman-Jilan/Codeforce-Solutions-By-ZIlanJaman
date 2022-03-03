#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;
while(tcase--){
    int t;
    cin>>t;

    string str;
    cin>>str;
    int a=0;

for (int i=0;i<t;i++){

    if((str[i]=='a' && str[i+1]=='b') || (str[i]=='b' && str[i+1]=='a')){

        cout<<i+1<<" "<<i+2<<endl;
        a=1;
        break;

    }





}
if(a==0){

        cout<<-1<<" "<<-1<<endl;
    }


    }




}














