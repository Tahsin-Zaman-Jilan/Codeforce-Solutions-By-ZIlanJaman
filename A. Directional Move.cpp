#include<bits/stdc++.h>
using namespace std;
int main(){
int tcase,n,sum=0;
string str;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>n;
    cin>>str;
    for(int j=0;j<str.size();j++){
        if(str[j]=='1'){
            sum++;
        }
        else if(str[j]=='0'){
            sum--;}
        }
        sum=sum%4;
if(sum==0){
        sum =0;
        cout<<"E"<<endl; }
else if(sum==3 || sum==-1){
            sum =0;
    cout<<"S"<<endl; }
else if(sum==2 || sum==-2){
            sum =0;
    cout<<"W"<<endl; }
else if(sum==-3 || sum==1){
            sum =0;
    cout<<"N"<<endl; }
    }



}
