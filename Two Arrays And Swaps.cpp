#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



int tcase,a,t,b;
cin>>tcase;
while(tcase--){

    cin>>a>>t;
    vector<int>v;
     vector<int>v1;
    for(int i=0;i<a;i++){
        cin>>b;

        v.push_back(b);


    }

        for(int i=0;i<a;i++){
        cin>>b;

        v1.push_back(b);


    }
sort(v.begin(),v.end());
       sort(v1.rbegin(),v1.rend());


int sum=0;
       for(int i=0;i<a;i++){
        if( i<t){
            sum+=max(v[i],v1[i]);
        }
        else{
            sum=sum+v[i];
        }
       }
cout<<sum<<endl;



}







}





