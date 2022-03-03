
#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long x){
if (x==1) return false;

for (long long i=2;i*i<=x;i++){// did not used sqrt(x) because it might return floating number and often this sqrt might not correct...
    if(x%i==0){
        return false;
    }
}
return true;


}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
long long x;
cin>>x;
cout<<isPrime(x)<<endl;// returns 0 if not prime.....returns 1 if prime








}





