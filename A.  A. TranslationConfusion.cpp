#include<bits/stdc++.h>
using namespace std;

int main() {
    int sum=0;
 string Ber,Bir;
 cin>>Ber;
 cin>>Bir;
 int a=Ber.size();
 int b=Bir.size();
 for( int i=0;i<a;i++){
     if (Ber[i]!=Bir[b-1]){ sum++;
     }
    }

 cout<<sum;
 if(sum==0){cout<<"YES";}
 else{cout<<"NO";}

  }
