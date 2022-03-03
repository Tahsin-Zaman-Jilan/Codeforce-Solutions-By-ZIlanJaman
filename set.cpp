#include<bits/stdc++.h>
using namespace std;

int main() {

ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
int ase,a,b;
cin>>ase;
set<int>S;
for(int i=0;i<ase;i++){
cin>>a>>b;
if(a==1){
    S.insert(b);
}
else if(a==2){
    if(S.count(b)>0){
        S.erase(S.find(b));
    }
}
    else{
       if(S.count(b)>0) { cout<<"YES\n";}
       else{cout<<"NO\n";
       }
    }
}
return 0;
}
