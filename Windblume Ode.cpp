#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n){
    if(n == 1)
        return false;
    for(long long int i = 2; i*i <= n; i++){        /// i^2 <= n -> i <= sqrt(n)
        if(n % i == 0)
            return false;
    }
    return true;
}
/// O(sqrt(n))

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tcase;
    cin>>tcase;
    while(tcase--){

        int t;
        cin>>t;
        vector<int>v;

        int sum=0;
    for(int i=0;i<t;i++){

        int a;
        cin>>a;
        v.push_back(a);
        sum=sum+a;
    }

    int prime=0;

//cout<<sum<<endl;


    for(int i = 2; i*i <= sum; i++){        /// i^2 <= n -> i <= sqrt(n)
        if(sum % i == 0){
            prime=1;
            break;
        }
    }



 if(prime==1){
     cout<<t<<endl;

    for(int i=0;i<t;i++){



    cout<<i+1<<" ";


 }


 }

 else {
         cout<<t-1<<endl;
 int need;
 for(int i=0;i<t;i++){

    if(v[i]%2==1){

        need=i;
        break;
    }



 }


 for(int i=0;i<t;i++){

if(need!=i){

    cout<<i+1<<" ";
}

 }



}
cout<<endl;
    }


    }



