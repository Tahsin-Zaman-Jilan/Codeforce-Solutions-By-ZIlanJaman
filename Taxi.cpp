#include<bits/stdc++.h>
using namespace std;
int main()
{

    int A,a,a1=0,a2=0,a3=0,a4=0;
    cin>>A;
    for(int i=0;i<A;i++){
        cin>>a;
        if(a==1) a1++;
         if(a==2) a2++;
          if(a==3) a3++;
           if(a==4) a4++;
           if(a==5) a5++;
    }

    int sum=0;
    sum=sum+a5;
    sum=sum+a2/2;
    a2=a2%2;
    if(a1>=a3){
        sum=sum+a3;
        a1=a1-a3;
        sum=sum+a1/4;
        a1=a1%4;
        if(a1+a2*2<=4 && a1+a2*2>0){
            sum++;

        }
        else if(a1==3 && a2==1 ){
            sum=sum+2;
        }
    }
   else{
    sum=sum+a1;
    a3=a3-a1;
    sum=sum+a2+a3;
   }
   cout<<sum;
}
