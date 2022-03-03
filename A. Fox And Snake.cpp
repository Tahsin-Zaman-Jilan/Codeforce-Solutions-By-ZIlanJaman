#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;

    cin>>n>>m;
    int a=true;

for (int i=1;i<=n;i++){
    if(i%2==1){
        for(int j=0;j<m;j++){
            cout<<"#";
        }
    }
    else if(i%2==0 && a==true){
            cout<<endl;
    for(int j=0;j<m-1;j++){
            cout<<".";
        }
        cout<<"#";
        cout<<endl;
        a=false;
    }
    else if(i%2==0 && a==false){
          cout<<endl;
          cout<<"#";
    for(int j=0;j<m-1;j++){
            cout<<".";
        }

        cout<<endl;
        a=true;


    }






}

    }





