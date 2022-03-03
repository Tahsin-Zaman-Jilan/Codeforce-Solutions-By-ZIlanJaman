#include<bits/stdc++.h>
using namespace std;
int main(){

float tcase, A,sum;
vector<int>v;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>A;
    A=A/100;
    v.push_back(A);

}
for(int i=0;i<tcase;i++){
    sum=sum+v[i];
}
cout<<sum;

//cout<<sum<<endl;
//sum=sum/tcase;
//cout<<sum;

 }
