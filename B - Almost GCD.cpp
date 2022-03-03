#include<bits/stdc++.h>
using namespace std;

int main() {
int i,j,cnt=0,num=0,mx=0,n,k;
vector<int>v;
cin>>n;

for(i=0;i<n;i++){

    cin>>k;
    v.push_back(k);

}
for(i=2;i<=1000;i++){
    cnt=0;
    for(j=0;j<n;j++){
        if(v[j]%i==0){
            cnt++;
        }
    }
    if(mx<cnt){
        mx=cnt;
        num=i;

    }
    if(mx==n){
        break;
    }
}
cout<<num;
}
