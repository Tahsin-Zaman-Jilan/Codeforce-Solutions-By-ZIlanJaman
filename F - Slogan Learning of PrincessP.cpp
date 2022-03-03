#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int tcase,A,B;
string str1,str2,str3;
map<string,string>mp;
cin>>tcase;
getline(cin,str1);
while(tcase--){
    getline(cin,str1);
    getline(cin,str2);
    mp[str1]=str2;
}

cin>>A;
getline(cin,str3);
for(int i=0;i<A;i++){
getline(cin,str3);
cout<<mp[str3]<<endl;



}


}

