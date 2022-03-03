#include<bits/stdc++.h>
using namespace std;

int main(){
int t_case,coun=1,a;
vector<int>v;
cin>>t_case;
for (int i=0;i<t_case;i++){
    cin>>a;
    v.push_back(a);
}
for(int i=0;i<t_case-1;i++){
    if(v[i]!=v[i+1]){
        coun++;
    }
}
cout<<coun;
}
