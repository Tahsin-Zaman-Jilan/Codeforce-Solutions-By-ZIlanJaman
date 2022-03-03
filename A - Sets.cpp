#include<bits/stdc++.h>
using namespace std;

int main() {


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
       if(S.count(b)>0) { cout<<"Yes\n";}
       else{cout<<"No\n";
       }
    }
}
return 0;
}

