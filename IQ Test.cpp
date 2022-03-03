
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


vector<string>v;
for(int i=0;i<4;i++){
    string str;
    cin>>str;

    v.pb(str);
}


int ok=0, cnt=0;

for(int i=0;i<3;i++){



    for(int j=0;j<4;j++){

        if(v[i][j]=='#'){

           cnt++;
          cout<< "1 "<<i<<" "<<j<<endl;
           }

            if(v[i][j+1]=='#'){

            cnt++;
         cout<< "2 "<<i<<" "<<j<<endl;
           }

  if(v[i+1][j]=='#'){

            cnt++;
             cout<< "3 "<<i<<" "<<j<<endl;
           }

 if(v[i+1][j+1]=='#'){

            cnt++;
            cout<< "4 "<<i<<" "<<j<<endl;
           }
           if(cnt!=2){
             ok=1;

             i=3;
             j=4;

              break;
             }




        }






           }








if(ok==0){

    cout<<"NO"<<endl;
}

else {


    cout<<"YES"<<endl;
}
















}








