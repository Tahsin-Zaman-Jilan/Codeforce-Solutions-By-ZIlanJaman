#include<bits/stdc++.h>
using namespace std;

int main() {
int t_case;
cin>>t_case;
vector<string>v(t_case);
for(int i=0;i<t_case;i++){
    cin>>v[i];

}
reverse(v.begin(),v.end());

set<string>sett;

for(string s: v){
    if(sett.count(s)>0) continue;

        cout<<s<<endl;
        sett.insert(s);

}
}

