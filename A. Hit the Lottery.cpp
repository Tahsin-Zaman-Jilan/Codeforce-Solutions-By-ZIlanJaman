# Codeforce-Solutions-By-ZIlanJaman
It is the solutions of some codeforce problems
#include<bits/stdc++.h>
using namespace std;
int main(){

int N,sum=0;
cin>>N;
if(N/100){
    sum+=N/100;
    N=N%100;
}
if(N/20){
    sum+=N/20;
    N=N%20;
}
if(N/10){
    sum+=N/10;
    N=N%10;
}
if(N/5){
    sum+=N/5;
    N=N%5;
}
if(N/1){
    sum+=N/1;
    N=N%1;
}
cout<<sum;




}
 
