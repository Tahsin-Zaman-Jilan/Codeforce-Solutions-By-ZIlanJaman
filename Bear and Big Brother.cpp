#include<bits/stdc++.h>
using namespace std;

int main () {
int a,b,UpdatedA,UpdatedB,sum=1;
cin>>a>>b;
UpdatedA=a*3;
UpdatedB=b*2;
if (UpdatedA>UpdatedB) {cout<<sum;}
else{
for(int i=0;i<i+1;i++){ UpdatedA=UpdatedA*3;
UpdatedB=UpdatedB+UpdatedB*2;
sum+=1;
if (UpdatedA>UpdatedB){ break;
}
}
cout<<sum;
}

}
