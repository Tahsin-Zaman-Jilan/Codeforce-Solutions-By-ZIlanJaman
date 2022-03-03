#include<bits/stdc++.h>
using namespace std;

int main(){
int test_case,flow,sum=1;
cin>>test_case;
set<int>s;
vector<int>v;
for(int i=0;i<test_case;i++){
    cin>>flow;
    v.push_back(flow);
}
for(int j=1;j<=test_case-1;j++){
    if(v[j]>=v[j-1]){
        sum++;

        }


        else{s.insert(sum);
        sum=1; }

}
   cout<<*(--s.end());
}
