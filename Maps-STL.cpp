#include<bits/stdc++.h>
using namespace std;

int main() {


int ase,a,b;
string c;
cin>>ase;
map<string,int>m;
for(int i=0;i<ase;i++){
cin>>a>>c;
if(a==1){

   cin>>b;
   m[c]+=b;
}
else if(a==2){
   m[c]=0;
    }

    else{
      cout<<m[c]<<endl;
       }
    }
}



