#include<bits/stdc++.h>
using namespace std;

int main(){
int total=1;
string s;
cin>>s;
for(int i=0;i<s.size();i++) {
  if (s[i]==s[i+1]){
    total+=1;
    if(total==7){ break;}
  }
else { total=1;}
}
if (total>6) {
    cout<<"YES";
}
else{ cout<<"NO"; }

}


