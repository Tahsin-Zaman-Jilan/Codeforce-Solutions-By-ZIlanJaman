#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;


while(tcase--){
int t;
int cnt=0;
vector<int>v;
cin>>t;



for(int i=0;i<t;i++){
    int a;
    cin>>a;
    v.push_back(a);

      if(v[i]!=i+1){
        cnt++;
      }
}

int len=v.size();
//cout<<len<<cnt<<endl;
if(cnt==0){
    cout<<0<<endl;
}
else if(v[0]==1 || v[t-1]==t){
    cout<<1<<endl;
}

else if(v[0]==t && v[t-1]==1 ){
    cout<<3<<endl;
}

else if(v[0]!=1   && v[t-1]!=t){
    cout<<2<<endl;
}



}

}












