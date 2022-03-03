#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

long long tcase,A,B,C,index=0,sum;
vector<int>v;
cin>>tcase>>A;
//bool x=false;
for(int i=0;i<tcase;i++){
    cin>>B;
    v.push_back(B);
}
for(int i=0;i<A;i++){
        cin>>C;
        for(int j=0;j<v.size();j++){


    if(v[j]==C){
       index=j;
       sum++;
     //cout<<j<<endl;
     break;


}
        }
if(sum>0){
  cout<<index<<endl;
}
else{
    cout<<-1<<endl;
}


sum=0;


}
}




