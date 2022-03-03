#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


string tcase;
cin>>tcase;

int ok=0;

for(int i=0;i<tcase.size();i++){

    if(tcase[i]=='0'){

      tcase.erase(tcase.begin() + i);
       ok=1;
       break;
    }


}

if(ok==0){

     tcase.erase(tcase.begin() + 1);

}






cout<<tcase;

















}









