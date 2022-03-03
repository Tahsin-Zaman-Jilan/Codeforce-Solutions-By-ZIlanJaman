#include<bits/stdc++.h>
using namespace std;
int main()
{
 int K,L,A,sum=0;
 cin>>K>>L;
 vector<int>v;
 for( int i=0; i<K;i++) {
    cin>>A;
    v.push_back(A);
 }
    for(int i=0;i<K;i++){
        if(v[i]>0 && v[i]>=v[L-1] ){
            sum++;
        }
    }
    cout<<sum;
}
