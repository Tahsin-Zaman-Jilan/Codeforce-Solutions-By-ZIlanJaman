
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


string str;

getline(cin,str);
vector<char>v;
int cnt=0;

int siz=str.size();

for(int i=0;i<siz;i++){



    if(str[i]==' '){

;
    }
    else {

         v.push_back(str[i]);

cnt++;
    }


}





char ans=v[cnt-2];
//cout<<ans<<endl;


if(ans=='a' || ans=='A' || ans=='e' || ans=='E'  || ans=='i' || ans=='I' || ans=='o' || ans=='O' || ans=='u' || ans=='U' || ans=='y' || ans=='Y'){

    cout<<"YES"<<endl;
}

else {


    cout<<"NO"<<endl;
}









}








