#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


long long tcase,t,A;
vector<int>v;
cin>>tcase;
while(tcase--){
        cin>>t;
    for(int i=0;i<t;i++){
        cin>>A;
        v.push_back(A);
    }
    sort(v.begin(),v.end());
    if(v[0]==v[1]){

        cout<<v.size()-2<<"\n";
    }
    else{
        cout<<v.size()-1<<"\n";
    }


    v.clear();

}





}

