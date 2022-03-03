#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int n,cnt=1;
cin>>n;

for(;;){

    if(n/10!=0){
        n=n/10;
        cnt++;
    }
else{
    break;
}


}

cout<<cnt;



}





