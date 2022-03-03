#include<bits/stdc++.h>
using namespace std;

int main(){

int Max,num1,num2,num3;
cin>>num1>>num2>>num3;
if(num1==1 && num2!=1){
    Max=((num1+num2)*num3);
}
else if(num1==1 && num2==1 && num3==1){
    Max=num1+num2+num3;
}
else{
    Max=num1*num2*num3;
}
cout<<Max;
}
