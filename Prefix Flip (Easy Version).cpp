#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


ll tcase;
cin>>tcase;

while(tcase--){



int t;
cin>>t;
string a,b;

cin>>a>>b;


vector<int>v;

for(int i=0;i<t;i++){

if(a[i]!=b[i]){

if(i>0)    {v.push_back(i+1);}
    v.push_back(1);
 if(i>0) {    v.push_back(i+1);}
}


}

cout<<v.size()<<" ";

for(int i=0;i<v.size();i++){

    cout<<v[i]<<" ";
}

cout<<endl;





}








}









