#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



int tcase;
cin>>tcase;

while(tcase--){

    long long a,b;
    cin>>a>>b;
    vector<long long>v;

    for(int i=0;i<b;i++){

        long long d;
        cin>>d;
        v.push_back(d);

    }

    sort(v.begin(),v.end());

    int sum=0,cnt=0;
    for(int i=b-1;i>0;i--){
        if(a>sum+(a-v[i])){
        sum=sum+(a-v[i]);
        cnt++;

        }

    }



    cout<<cnt<<endl;

}







}





