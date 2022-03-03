
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

string str;
ll t;
cin>>str>>t;



int n=str.size();
int len=n/t;

for(int i=0;i<n;i++){
if(n%t!=0){


    cout<<"NO"<<endl;
    return 0;
}


else if(str[i]!=str[(i/len)*len+len-1-(i%len)]){

    cout<<"NO"<<endl;
    return 0;
}

}
 cout<<"YES"<<endl;
 return 0;



















}








