#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int t,a,b;
int c=true;

cin>>t;
while(t--){
vector<int>v;
    cin>>a;
    for (int i=0;i<a;i++){
        cin>>b;
        v.push_back(b);

}
sort(v.begin(),v.end());
for(int i=1;i<a;i++ ){
    if(abs(v[i-1]-v[i])>1 ){
    c=false;

        break;
    }
}
if(c==true){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
c=true;
}


//cout<<abs(2-5);


}





