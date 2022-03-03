#include<bits/stdc++.h>
using namespace std;

int main() {
long int t,a,sum=0;
vector<int>v;
cin>>t;
for(int i=0;i<t;i++) {
cin>>a;
v.push_back(a);
}

for(int j=0;j<v.size();j++){

    if(v[j]%(j+1)==0){
        sum++;}


 if (sum==3){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
}


}
