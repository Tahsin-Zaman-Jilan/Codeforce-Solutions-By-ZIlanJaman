#include<bits/stdc++.h>
using namespace std;
int main(){


double tcase,A,sum=0.0;

cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>A;
    sum=sum+A;

}
sum=sum/tcase;
cout<<fixed<<setprecision(12)<<sum;


}




