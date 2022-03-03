#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase,a,b,c,d;

cin>>tcase;

while(tcase--){

    cin>>a>>b>>c>>d;

    if(a/2>=c && b/2>=d && a/2<=c && b/2<=d){
        cout<<"1 "<<b<<" "<<a<<" 1"<<endl;


    }

    else {
        cout<<"1 1"<<a<<" "<<b<<endl;


    }



}



}




