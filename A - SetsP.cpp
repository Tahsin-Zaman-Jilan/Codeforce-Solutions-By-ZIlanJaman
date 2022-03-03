#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int tcase,A,B;
set<int>s;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>A>>B;
    s.insert(B);
    if(A==3){
        if(s.count(i)>0){
        cout<<"Yes"<<endl;

        }
        else{
            cout<<"No"<<endl;
        }
    }

}







}

