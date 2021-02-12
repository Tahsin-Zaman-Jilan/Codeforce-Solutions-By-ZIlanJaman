# Codeforce-Solutions-By-ZIlanJaman
It is the solutions of some codeforce problems
#include<bits/stdc++.h>
using namespace std;

int main(){
int n,sum=0;
cin>>n;
for(int i=1;i<n+1;i++){
  int a,b,c;
  cin>>a>>b>>c;
  int d=a+b+c;
  if (d>1){
    sum=sum+1;
  }
  }
cout<<sum;
}
 
