#include<bits/stdc++.h>
using namespace std;

int main() {
int sum=0;
string str;
cin>>str;
for (int i=0;i<str.size();i++) {
    if ((str[i]=='H')||  (str[i]=='9' || (str[i]=='Q')) ){
        sum++;
    }

}
if(sum==0) { cout<<"NO";}
else { cout<<"YES";}

}
