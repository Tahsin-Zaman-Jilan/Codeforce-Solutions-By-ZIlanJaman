#include<bits/stdc++.h>
using namespace std;
int main(){
int A[10000000]={0};
for(int i=2;i<=10000000;i++){
    if(A[i]==0){
        for(int j=2;i*j<=10000000;j++){
            A[i*j]=1;
        }
    }
}
int case1;
cin>>case1;
long long numb;
long long squ;
for(int i=0;i<case1;i++){
    cin>>numb;
    squ=sqrt(numb);
    if(numb==1){
        cout<<"NO"<<endl;
    }
    else if((squ*squ==numb) && (A[squ]==0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


}


