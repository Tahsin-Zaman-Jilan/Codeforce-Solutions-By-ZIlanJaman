#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

//9876
int tcase;
cin>>tcase;
while(tcase--){
        vector<int>v;
    int t,a=1,rem,cnt=0;
    cin>>t;
    for(int i=0;t!=0;i++){


        rem=t%10;
        t=t/10;
        if(rem!=0){
            cnt++;


        }
else{
  a=a*10;

}
if(rem!=0 ){
        rem=rem*a;
        v.push_back(rem);
        a=a*10;

}



    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){

        cout<<v[i]<<" ";
    }


}





}





