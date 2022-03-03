#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase,a,sum=0;
cin>>tcase;
vector<int>v;
for(int i=0;i<tcase;i++){
    cin>>a;
    v.push_back(a);
}
int maxm=v[0];
for(int i=0;i<tcase;i++){
    if(maxm<v[i]){
        sum++;
        maxm=v[i];
    }
}
int minm=v[0];
for(int i=0;i<tcase;i++){
    if(minm>v[i]){
        sum++;
        minm=v[i];
    }




}

cout<<sum<<endl;
}



