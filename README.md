# Codeforce-Solutions-By-ZIlanJaman
It is the solutions of some codeforce problems
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tcase,a,b,c,d;
    string str;
cin>>a>>b;
cin>>str;
int arr[a+1];
arr[0]=0;
for(int i =1;i<a+1;i++){
    arr[i]=arr[i-1]+str[i-1]-'a'+1;


}
while(b--){
    cin>>c>>d;
    int ans=arr[d]-arr[c-1];
    cout<<ans<<endl;


}










}
















