#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;

while(tcase--){


string a;

cin>>a;
int len=a.size();
int sum=len;
int ans;
for(int i=0;i<a.size();i++){


    for(int j=i+1;j<a.size();j++){


        ans=(a[i]-'0')*10+ (a[j]-'0');



        if(ans%25==0){

            sum=min(sum,len-2-i);

        }
    }



}

cout<<sum<<endl;


}








}








