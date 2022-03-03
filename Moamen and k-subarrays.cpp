#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
long long tcase;
cin>>tcase;


while(tcase--){

    long long t,k;
    cin>>t>>k;
    vector<long long>v;
    long long minm;
    for(int i=0;i<t;i++){

        long long b;
        cin>>b;
        v.push_back(b);


    }


    sort(v.begin(),v.end());
    minm=v[0];
cout<<"Min is"<<minm<<endl;

    if(minm<=k){

        cout<<"Yes"<<endl;
    }


    else{


        cout<<"No"<<endl;
    }





}







}





