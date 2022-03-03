#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int tcase,n,number;
cin>>tcase;
while(tcase--){

    cin>>n;
    int odd=0,even=0;
    for(int i=0;i<2*n;i++){
        cin>>number;
        if(number%2==0){
            even++;

        }
        else{

            odd++;
        }


    }
    if(odd==even){
        cout<<"Yes"<<endl;


    }
    else{

        cout<<"No"<<endl;

    }

}








}





