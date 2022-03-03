#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
string str,str1;
cin>>tcase;
while(tcase--){

    cin>>str;
    str1=+str[0];
    for(int i=2;i<str.size()-1;i=+2){
        if(str[i]==str[i-1]){
str1=+str[i-1];
        }
    }
    str1=+str[str.size()-1];
cout<<str1<<endl;
}





}





