#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int n,k,sum=0,add=0;
cin>>n>>k;
int a=240-k;
for(int i=1;;i++){
        add=add+5*i;
if(add<=a){
        sum++;
    }
    else{
        break;
    }
}
if(sum<n){
cout<<sum;}
else{
    cout<<n;
}



}





