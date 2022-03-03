#include<bits/stdc++.h>
using namespace std;
int main()
{
   int case1,case2,A,ans;
   vector<int>v;
   cin>>case1>>case2;
   for(int i=0;i<case2;i++){
    cin>>A;
    v.push_back(A);
   }
    sort(v.begin(),v.end());
    ans=v[case1-1]-v[0];
    for(int i=1;i<=case2-case1;i++){

    if (v[i+case1-1] - v[i] < ans){
        ans=v[i+case1-1] - v[i];
    }
    }
    cout<<ans;
}
