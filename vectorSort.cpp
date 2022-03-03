#include<bits/stdc++.h>
using namespace std;

int main(){
int N,a;
cin>>N
vector<int>v;
for(int i=0;i<N;i++){
    cin>>a;
    v.push_back(a);


}
sort(v.begin(),v.end());
for(int x: v ){
    cout<<x<<" ";
}
}
