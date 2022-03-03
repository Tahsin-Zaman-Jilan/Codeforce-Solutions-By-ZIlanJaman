#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test,test1,A,B,sum=0;
   cin>>test;
   for(int i=0;i<test;i++){
    cin>>A>>B;
    test1=B-A;
    if(test1>1){
        sum++;
    }
   }
    cout<<sum;
}
