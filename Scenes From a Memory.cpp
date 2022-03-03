#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;


bool prime[100];


 void solve(){


 }
int check=0;
for( int i=0;i<t;i++){

    if(str[i]=='1' || str[i]=='4' || str[i]=='6' || str[i]=='8' ||str[i]=='9' ){

        cout<<1<<endl;
        cout<<str[i]<<endl;
        return;
    }



}






    for(int i=0;i<t;i++){

        for(int j=i+1;j<t;j++){
                int num=(str[i]-'0')*10+(str[j]-'0');

            if(!prime[num]){

                cout<<2<<endl;
                cout<<str[i]<<str[j]<<endl;
return;

            }



        }


    }







}

//to check not prime--- !prime[the number]
// prime ---prime[the number]
//Returns false if not prime. and True if prime
int main() {
    for (int i = 2; i < 100; i++) {
        prime[i] = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime[i] = false;
            }
        }
    }


    ll tcase;
cin>>tcase;

while(tcase--){


int t;
cin>>t;

string str;
cin>>str;
solve();

}
}















