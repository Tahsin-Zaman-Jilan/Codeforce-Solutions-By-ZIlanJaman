#include<bits/stdc++.h>
using namespace std;

int main(){

int T,a,sum=0;
cin>>T;
for(int i=0;i<T;i++){
    cin>>a;
    if(a==1){
        sum++;
    }
}
if(sum==0){
    cout<<"EASY";
}
else{
    cout<<"HARD";
}
}
