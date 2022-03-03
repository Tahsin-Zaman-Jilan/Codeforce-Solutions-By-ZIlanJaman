#include<bits/stdc++.h>
using namespace std;
int main(){


long long tcase,A,sum=0,result=0,j;
cin>>tcase;
while(tcase--){
    cin>>A;
    sum=(A*(A+1))/2-2;
    for( j=1;pow(2,j)<=A;j++){

        sum= sum- pow(2,j+1);
    }
    //sum=sum-result;
    cout<<sum<<endl;
}

}

