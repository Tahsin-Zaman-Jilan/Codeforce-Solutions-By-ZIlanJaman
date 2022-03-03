#include<bits/stdc++.h>
using namespace std;
int main(){


int tcase,A;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>A;
    if(A<3){
        cout<<0<<endl;
    }
    else if(A%2==0){
        A=A/2-1;
        cout<<A<<endl;
    }
    else{
    A=A/2;
    cout<<A<<endl;}
}

}

//999999999
//2000000000
