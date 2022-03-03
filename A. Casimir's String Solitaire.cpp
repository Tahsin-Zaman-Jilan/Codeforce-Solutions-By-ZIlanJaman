#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tcase;
    cin>>tcase;


    while(tcase--){

        string str;
        cin>>str;

        int cntA=0,cntB=0,cntC=0;

        for(int i=0;i<str.size();i++){
            if(str[i]=='A'){
                cntA++;
            }
           else if(str[i]=='B'){
                cntB++;
            }
            else if(str[i]=='C'){
                cntC++;
            }

        }



        if(cntA+cntC==cntB){

            cout<<"YES"<<endl;

        }

        else{

            cout<<"NO"<<endl;
        }

    }











}





