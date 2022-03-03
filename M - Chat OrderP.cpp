#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase;
string str;
vector<string>v;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>str;

    v.push_back(str);}


reverse(v.begin(),v.end());
set<string>s;
for(string x:v){
    if(s.count(x)>0){  continue;}
    cout<<x<<endl;
    s.insert(x);

}






}

