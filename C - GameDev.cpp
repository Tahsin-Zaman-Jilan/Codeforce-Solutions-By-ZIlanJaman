#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


double A,B,C,D,sum1=0,sum2=0;
cin>>A>>B;
cin>>C>>D;
sum1=(A-0)*(A-0)+(B-0)*(B-0);
sum1=sqrt(sum1);
sum2=(C-0)*(C-0)+(D-0)*(D-0);
sum2=sqrt(sum2);
if(sum1>sum2){
    cout<<"Wil";
}
else if(sum1==sum2){
    cout<<"Empate";
}
else{
    cout<<"Russo";
}

}





