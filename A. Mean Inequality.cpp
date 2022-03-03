#include <bits/stdc++.h>
using namespace std;

int main(){



int tcase;

cin>>tcase;
while(tcase--){
        int a;
    cin>>a;
     vector<int>v;
    for(int i=0;i<2*a;i++){
        int c;
        cin>>c;

        v.push_back(c);

    }
    sort(v.begin(),v.end());

    for(int i=0;i<a;i++){
        cout<<v[i]<<" "<<v[2*a-i-1]<<" ";

    }


}




}




