#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;

while(tcase--){

string a,c;
ll b,d;

cin>>a>>b;
cin>>c>>d;


if(a.size()+b > c.size()+d){

    cout<<">"<<endl;
}


else if(a.size()+b < c.size()+d){

    cout<<"<"<<endl;
}


else {

    while(a.size()<c.size()){
        a+='0';
    }

    while( a.size()>c.size()){
        c+='0';
    }



    if(a==c){

        cout<<"="<<endl;
    }

     else if(a<c){
        cout<<"<"<<endl;
     }

     else {

        cout<<">"<<endl;

     }




}



}
}







