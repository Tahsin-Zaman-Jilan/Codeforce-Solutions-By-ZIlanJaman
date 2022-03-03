#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
int t_case,Q;
cin>>t_case;

map<string,string>mapp;

string a,b;
getline(cin,a);


for(int i=0;i<t_case;i++){
    getline(cin,a);
    getline(cin,b);
    mapp[a]=b;
}
cin>>Q;
getline(cin,a);
for(int i=0;i<Q;i++){
    getline(cin,a);
    cout<<mapp[a]<<endl;

}
return 0;
}

