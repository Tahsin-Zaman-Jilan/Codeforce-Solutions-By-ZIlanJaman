#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

int tcase;
cin>>tcase;
while(tcase--){
    int a;
    int b=true;
    vector<int>v;
    vector<int>v2;
    for (int i=0;i<4;i++){
    cin>>a;
    v.push_back(a);

}
 if(min(v[0],v[1])>max(v[2],v[3]) || max(v[0],v[1])<min(v[2],v[3])){
    b=false;
    }


    if(b==true){


        cout<<"YES"<<endl;
    }
    else{

        cout<<"NO"<<endl;

    }
}






}










