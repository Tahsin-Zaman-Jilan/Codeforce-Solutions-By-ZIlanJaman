#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;

string str;
cin>>str;
string first,second;

for(int i=0;i<tcase;i++){
        first+=str[i];}

for(int i=tcase;i<2*tcase;i++){
        second+=str[i];}

        sort(first.begin(),first.end());
        sort(second.begin(),second.end());

ll cnt1=0,cnt2=0;
for(int i=0;i<tcase;i++){


    if(first[i]<second[i]){

        cnt1++;
    }

    else if(first[i]>second[i]){

        cnt2++;
    }

}

//cout<<first<<" "<<second<<endl;

if(cnt1==tcase || cnt2==tcase ){

    cout<<"YES"<<endl;
}

else {


    cout<<"NO"<<endl;
}










}

















