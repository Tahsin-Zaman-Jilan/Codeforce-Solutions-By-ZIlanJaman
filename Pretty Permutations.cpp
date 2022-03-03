#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;

while(tcase--){

int t;
cin>>t;
vector<int>v;
for(int i=1;i<=t;i++){

    v.push_back(i);

}



if(t%2==0){
for(int i=1;i<=t;i=i+2){

    swap(v[i],v[i-1]);

}



}
else {

    v[0]=3;
    v[1]=1;
    v[2]=2;

    for(int i=4;i<=t;i=i+2){

         swap(v[i],v[i-1]);


    }



}

for(int i=0;i<t;i++){

    cout<<v[i]<<" ";
}
cout<<endl;




}


















}








