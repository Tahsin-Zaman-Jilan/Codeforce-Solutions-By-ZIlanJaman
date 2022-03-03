#include<bits/stdc++.h>
using namespace std;

int main() {
int t,a,b,c,d,a1,b1,c1;

cin>>t;
t=t+1;
for( ; ; ){
a=t%10;
a1=t/10;
b =a1%10;
b1=a1/10;
c=b1%10;
c1=b1/10;
d=c1%10;
if (a==b || a==c || a==d || b==c || b==d || c==d) {
    t=t+1;
}
else{ break;}
}
cout<<t;
}
