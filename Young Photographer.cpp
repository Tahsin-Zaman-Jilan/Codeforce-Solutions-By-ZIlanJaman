#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int a,b;
cin>>a>>b;
int c=a;
map<int,int>mp;
    while(c--){
ll tcase,x;

cin>>tcase>>x;
if(tcase>x){
    int a;
    a=tcase;
    tcase=x;
    x=a;

}



for(int i=tcase;i<=x;i++){

    mp[i]++;
}




    }

    vector<int>v;
    for(auto x:mp){
//cout<<x.second<< " ";
        if(x.second==a){

            v.pb(x.first);
        }

    }
//cout<<endl;


    int len=v.size();
//
//    for(int i=0;i<len;i++){
//
//        cout<<v[i]<< " ";
//    }
//    cout<<endl;


    int minm=10001;

int found=0;

    for(int i=0;i<len;i++)
{

    if(abs(v[i]-b)<minm){

        minm=abs(v[i]-b);
        found=1;
    }


}

if(found==1){

cout<<minm;
}

else {
    cout<<-1<<endl;

}


}

















