#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int a,b,ans;
cin>>a>>b;
if(a%10==0){
    ans=1;

}
else{
    for(int i=1; ;i++){
        if((a*i-b)%10==0){
            ans=i;
            break;
        }
        else if ((a*i)%10==0){
            ans=i;
            break;
        }

        }
    }
    cout<<ans;

}










