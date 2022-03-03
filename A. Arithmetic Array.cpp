#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


float tcase,t,a;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>t;
    float sum=0.0;
    vector<int>v;
    for(int j=0;j<t;j++){
        cin>>a;
v.push_back(a);
       sum=sum+a;


    }


    if(sum/t==1.0){

        cout<<0<<endl;

    }
    else{
       if(sum<t){


        cout<<1<<endl;
    }


      else{
        double ans=sum-t;

        cout<<ans<<endl;


    }


    }








}





}




