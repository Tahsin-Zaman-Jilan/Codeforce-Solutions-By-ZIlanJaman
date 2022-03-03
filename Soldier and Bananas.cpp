#include<bits/stdc++.h>
using namespace std;
 int main() {
int k,n,w,borrow,sum=0;
cin>>k>>n>>w;
for(int i=1;i<=w;i++) { sum=sum+(i*k); }

if (sum>n){
borrow =sum-n;
cout<<borrow;
 }
else {cout<<0; }
 }
