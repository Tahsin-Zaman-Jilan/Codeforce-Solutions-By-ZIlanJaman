#include<bits/stdc++.h>
using namespace std;
int main(){
int NumOfTest,A,EvenSum=0,OddSum=0,Evenind,Oddind ;
vector<int>v;
cin>>NumOfTest;
for(int i=0;i<NumOfTest;i++){
    cin>>A;

    v.push_back(A);
    if(v[i]%2==0){
        EvenSum++;
        Evenind=i;
    }
    else{
        OddSum++;
        Oddind=i;
    }
}
if(EvenSum>OddSum){
    cout<<Oddind+1;
}
else{
    cout<<Evenind+1;
}
}




