#include <bits/stdc++.h>
using namespace std;


const int maxm=1e7+10;
bool mark[maxm];
void sieve(){
for(int i=2;i*i<=maxm;i++){
    if(mark[i]){
        continue;
    }
    for(int j=i+i;j<maxm;j++){
        mark[i]=true;
    }
}



}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

for(int i = 0; i<10; i++){
        cout<<sieve[i]<<endl;
    }



}











