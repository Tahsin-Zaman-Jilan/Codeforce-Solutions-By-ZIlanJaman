#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase,a,sum=0;
vector<int>v;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>a;
    v.push_back(a);


}
sort(v.begin(),v.end());
for (int i=0;i<tcase;i++){
    sum=sum+(v[tcase-1]-v[i]);
}
cout<<sum;





}




