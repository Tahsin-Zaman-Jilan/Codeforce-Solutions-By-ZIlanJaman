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

while(tcase--){


string a,b;
cin>>a>>b;

int s1=a.size();

int s=b.size();

string str="";
int i=0;
    int k=s-1;
    int k1=s1-1;
while(k>0){

    if(b[k-48]-a[k1-48]>=0 ){

        str+=b[k-48]-a[k1-48];
        k--;
        k1--;
    }

    else {

        int c=b[k]+b[k-1];

        int result=(int)c-a[k1-48];
        str+=result;
        k--;
        k--;
        k1--;

    }



}

cout<<str<<endl;






}








}








