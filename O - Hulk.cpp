#include<bits/stdc++.h>
using namespace std;
int main(){
int sum=0,tcase,A;
string str;
cin>>tcase;
if(tcase==1){
    str="I hate it";
}
else{
for(int i=1;i<=tcase;i++){

    if(i%2==1){
        str=str+"I hate ";
        if(tcase==i){
            str=str+"it";
        }
        else{
            str=str+"that ";
        }
    }
    else{
        str=str+"I love ";
        if(tcase==i){
            str=str+"it";
        }
        else{
            str=str+"that ";
        }
    }
}
}
cout<<str;

}
