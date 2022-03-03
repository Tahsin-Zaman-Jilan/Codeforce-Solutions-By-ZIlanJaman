#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;
while(tcase--){
    int t;
    cin>>t;
    vector<int>v;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        v.push_back(a);

    }



int ans=v[0];
for (int i=1;i<t;i++){

    ans= ans & v[i];

}

cout<<ans<<endl;



}





}






