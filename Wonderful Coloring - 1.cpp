#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase;
cin>>tcase;
while(tcase--){

    string x;
    cin>>x;
     unordered_map<char, int> m;
    for (int i = 0; i < x.length(); i++) {
        // increase the frequency of character
        m[x[i]]++;


}
int ans=0,tmp=0;
for(int i=0;i<m.size();i++){
    if(m[i]>=2){
       ans=ans+1;
    }
    else if(m[i]==1){

        tmp++;
    }
}
   ans=ans+tmp/2;
   cout<<ans<<endl;








}

}




