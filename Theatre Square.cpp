#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m,a;
cin>>n;
cin>>m;
cin>>a;
long long  case1,case2;
if(n%a==0){
   case1=n/a;
   }
else{
 case1=(n/a)+1;

}
if(m%a==0){
   case2=m/a;
   }
else{
     case2=(m/a)+1;

}
long long total=case1*case2;
cout<<total;


}


