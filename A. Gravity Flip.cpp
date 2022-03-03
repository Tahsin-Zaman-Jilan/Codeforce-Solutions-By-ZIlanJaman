#include<bits/stdc++.h>
using namespace std;
int main()
{
   int case1,case2,A;
   vector<int>v;
   cin>>case1>>case2;
   for(int i=0;i<case1;i++){
    cin>>A;
    v.push_back(A);
   }
    sort(v.begin(),v.end());
    for(int i=0;i<case1;i++){
        cout<<v[i]<<" ";
    }
}
