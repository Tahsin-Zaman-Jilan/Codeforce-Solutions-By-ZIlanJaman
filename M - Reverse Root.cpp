#include<bits/stdc++.h>
using namespace std;
int main(){
double X;
 vector<double>v;

 while(cin>>X){

    X=sqrt(X);
    v.push_back(X);

 }

 for( int i=v.size()-1;i>=0;i-- ){
    cout<<fixed<<setprecision(4)<<v[i]<<endl;
 }

}




