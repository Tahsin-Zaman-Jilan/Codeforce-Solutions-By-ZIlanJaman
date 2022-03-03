#include<bits/stdc++.h>
using namespace std;

int main() {
int n,a1,a2,a3,a=0,b=0,c=0;
cin>>n;
for (int i=0;i<n;i++){
cin>>a1>>a2>>a3;

a=a+a1;
b=b+a2;
c=c+a3;
}
if (a==0 && b==0 && c==0) { cout<<"YES"; }
else { cout<<"NO";}
}
