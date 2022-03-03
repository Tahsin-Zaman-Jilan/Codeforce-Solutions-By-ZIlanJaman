#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


long long int tcase,A;

set<long long int>s{-1};\
cin>>tcase;
for(int i=0;i<tcase;i++){

    cin>>A;
    s.insert(A);

    auto it=--s.lower_bound(A);
    cout<<*it<<"\n";

}






}

