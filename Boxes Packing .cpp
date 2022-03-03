#include<bits/stdc++.h>
using namespace std;
int main(){

int T,sum;
vector<int>vec(T);
cin>>T;
sum=T;
for (int i=0;i<T;i++){
    cin>>vec[i];
}
sort(vec.begin(),vec.end());
for( int i=0;i<T;i++){
    if( vec[i]!=vec[i+1]){
        sum--;
    }
}
cout<<sum;
}
