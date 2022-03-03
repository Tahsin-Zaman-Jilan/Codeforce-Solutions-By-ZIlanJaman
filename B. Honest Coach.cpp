#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase,a,b,ans;

cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>a;
    vector<int>v;
    for(int j=0;j<a;j++){
        cin>>b;
        v.push_back(b);



    }
    sort(v.begin(),v.end());
ans=v[1]-v[0];
    for (int j=1;j<a;j++){
        if(v[j]-v[j-1]<ans){
            ans=v[j]-v[j-1];
        }


    }
    cout<<ans<<"\n";



}






}




