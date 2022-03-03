
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;

while(tcase--){

int t;
cin>>t;
vector<int>v;
int sum=0;

for(int i=0;i<t;i++){
int a;
cin>>a;
v.pb(a);

}

    map<int, int> M;

    // Traverse vector vec check if
    // current element is present
    // or not
     for (int i = 0; i < t; i++){

M[v[i]]++;


    // Traverse the map to print the
    // frequency








}
vector<int>v2;

for(int i=0;i<t;i++){

    if(M[v[i]]<2){

        v2.push_back(v[i]);
    }


}

cout<<v2.size()<<endl;







}
}









