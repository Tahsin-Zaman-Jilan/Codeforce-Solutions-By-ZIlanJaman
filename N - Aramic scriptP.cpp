#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



int tcase;
string A;
set<set<char>>so;
cin>>tcase;
while(tcase--){
    cin>>A;

    set<char>s;
    for( char x:A ){
        s.insert(x);
    }


    so.insert(s);





}

int len=so.size();

cout<<len;





}

