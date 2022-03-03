#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase,N,M;
long long int A,B;
set<long long int>s;
cin>>tcase;
while(tcase--){
    cin>>N>>M;
    for(int i=0;i<N;i++){
            cin>>A;
        s.insert(A);
    }
    for(int i=0;i<M;i++){
        cin>>B;
        if(s.count(B)>0){
cout<<"YES\n";


        }
        else{
             cout<<"NO\n";
            s.insert(B);
        }

    }

}





}

