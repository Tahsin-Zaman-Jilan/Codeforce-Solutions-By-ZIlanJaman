#include<bits/stdc++.h>
using namespace std;
int main(){

int A,B,C,D,mis,vas;
cin>>A>>B>>C>>D;

mis=max(3*A/10,A-A/250*C);
vas=max(3*B/10,B-B/250*D);
//cout<<mis<<endl;
//cout<<vas<<endl;
if(mis==vas){
    cout<<"Tie";
}

else if(mis>vas){
    cout<<"Misha";
}
else{
    cout<<"Vasya";
}

}
