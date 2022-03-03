#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


long long tcase,t,a;
cin>>tcase;

while(tcase--){
    cin>>t;
    vector<int>v;
    long long sum=0,ans=0;
    for(int i=0;i<t;i++){
        cin>>a;
        v.push_back(a);
        sum=sum+a;

    }
    if(sum%t!=0){
        cout<<-1<<endl;

    }
    else{
    sum=sum/t;

//cout<<sum<<endl;

    for(int i=0;i<t;i++){
        if(sum>=v[i]){
            ans++;
            //cout<<v[i]<<" ";
        }

//cout<<endl;

    }

//cout<<ans<<endl;
    ans=t-ans;
    cout<<ans<<endl;
}

}




}





