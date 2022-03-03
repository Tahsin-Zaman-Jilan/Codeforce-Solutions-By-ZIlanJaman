#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
int sum=0;
cin>>t;
for(int i=1;i<t+1;i++){
int n;
cin>>n;
for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
        }
 if (a == 0){}
  else{
  sum = sum + i % 10;
     i = i/10;
  }
 cout << (sum % 3 != 0 ? "Yes\n" : "No\n");
}


}



