#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


long long tcase;
cin>>tcase;
while(tcase--){
    long long t;
    cin>>t;

    vector<long long >v;

    for(int i=0;i<t;i++){
        long long a;
        cin>>a;

        v.push_back(a);

    }

long long high=0;
long long product;
for (int i=1;i<t;i++){

    product=v[i]*v[i-1];
    if(product>high){
        high=product;
    }




}
cout<<high<<endl;

}
}
