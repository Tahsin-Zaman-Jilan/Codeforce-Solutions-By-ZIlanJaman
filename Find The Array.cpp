#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase,t;
cin>>tcase;

while(tcase--){
    int sum=1,cnt=1,sum1=3;
    cin>>t;
    while(sum<t){
       sum=sum+ sum1;
       sum1=sum1+2;
       cnt++;


    }

    cout<<cnt<<endl;


}
}









