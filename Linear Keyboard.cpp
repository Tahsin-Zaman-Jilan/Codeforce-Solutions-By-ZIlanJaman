
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;

while(tcase--){

int ans=0;
string alpha;
cin>>alpha;
string str;
cin>>str;
for(int i=0;i<str.size()-1;i++){

    int a=alpha.find(str[i]);
    int b=alpha.find(str[i+1]);
    ans =ans+abs(a-b);

}

cout<<ans<<endl;







}








}






