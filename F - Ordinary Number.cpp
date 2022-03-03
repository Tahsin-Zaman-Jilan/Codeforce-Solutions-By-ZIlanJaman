#include<bits/stdc++.h>
using namespace std;
int main(){
int tcase,sum=0,A;
vector<int>v;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>A;
    v.push_back(A);

}

for(int i=1;i<tcase-1;i++){
    if((v[i]>v[i+1] && v[i]<v[i-1]) || (v[i]<v[i+1] && v[i]>v[i-1]) )
    {
        sum++;
    }
}


cout<<sum;


}
