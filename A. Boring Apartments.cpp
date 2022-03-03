#include<bits/stdc++.h>
using namespace std;

int main() {
int t,x,coun,algo,n=1;
cin>>t;
for (int i=0;i<t;i++) {
cin>>x;

    algo=n*10+n;
    coun++;
    if(algo<10000){
        if(algo==x) { break;}
    }
else{n++; }
cout<<coun<<endl;
}
}
