#include<bits/stdc++.h>
using namespace std;

int main() {
int N,a,element,range1,range2;
cin>>N;
vector<int>v;
for(int i=0;i<N;i++){
    cin>>a;
    v.push_back(a);


}
cin>>element;
cin>>range1>>range2;
range1=range1-1;
range2=range2-1;
v.erase(v.begin()+(element-1));
v.erase(v.begin()+range1,v.begin()+range2);
cout<<v.size()<<endl;
for(int x: v)
    cout<<x<<" ";


}
