#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase,sum=0,n,num=0;

cin>>tcase;
while(tcase--){
    cin>>n;
   int ll=n/2;
    if(n==2){
            cout<<"NO"<<endl;
continue;
    }
    if(ll%2==0){
int a=2,p=1;

        cout<<"YES"<<endl;
       for(int i=0;i<ll;i++){
     cout<<a<<" ";
     sum+=a;
     a+=2;
        }
        for(int i=ll;i<n;i++){
       cout<<p<<" ";
       num+=p;
       if(i==n-2)
       p=sum-num;
       else p+=2;
            }

        cout<<endl;


    }
    else{
        cout<<"NO"<<endl;
    }

    }


}











