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
    char minx=str[0];

    for (int i=1;i<str.size();i++){
        if(str[i]<minx){
            minx=str[i];
        }


    }

    for(int i=0;i<str.size();i++){

        if(str[i]==minx){
                str.erase(str.begin() + i);
                break;
        }

    }

    cout<<minx<<" "<<str<<endl;




}








}






