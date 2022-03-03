#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase;
cin>>tcase;
while(tcase--){
int t,cnt=0;
cin>>t;
    string str;

cin>>str;

string str1=str;

sort(str1.begin(),str1.end());

for(int i=0;i<t;i++){

    if(str1[i]!=str[i]){
        cnt++;


    }


}

cout<<cnt<<endl;



}






}







