
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


ll tcase;
cin>>tcase;

while(tcase--){





string str;
cin>>str;
ll cnt1=0,cnt0=0;

for(int i=0;i<str.size();i++){

    if(str[i]=='1'){
        cnt1++;
    }


    else {
        cnt0++;
    }

}



 if(cnt0==cnt1){



    cout<<cnt0-1<<endl;



}
else if(cnt1>cnt0){

    cout<<cnt0<<endl;
}

else {

    cout<<cnt1<<endl;
}


}








}








