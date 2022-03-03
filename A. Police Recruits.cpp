
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);




int tcase,a,sum=0,result=0;
vector<int>v;
cin>>tcase;
for(int i=0;i<tcase;i++){
cin>>a;
v.push_back(a);

}
for(int i=0;i<tcase;i++){
    if(v[i]>0){
        sum=sum+v[i];
    }
    else{
        if(sum==0){
            result++;
        }
        else{
            sum=sum-1;
        }
    }
}



cout<<result;
}



