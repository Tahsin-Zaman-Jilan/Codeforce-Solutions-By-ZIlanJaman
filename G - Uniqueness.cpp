#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase,A;
set<int>s;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>A;
    s.insert(A);
}
int result=tcase-s.size();
cout<<result;





}

