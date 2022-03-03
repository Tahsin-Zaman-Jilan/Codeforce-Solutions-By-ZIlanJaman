#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase,A;
set<int>s;
cin>>tcase;
for(int i=0;i<tcase;i++){
        cin>>A;
    if(i==0){
        cout<<-1<<endl;
        s.insert(A);
    }
    else{
        s.insert(A);
        cout<<*(----s.end())<<endl;



    }


}






}

