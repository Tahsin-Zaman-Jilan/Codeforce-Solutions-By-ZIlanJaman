#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase,a,b,sum=0;
vector< pair <int,int> > v;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>a>>b;
    v.push_back(make_pair(a,b));
}

for(int i=0;i<tcase;i++){

for(int j=i+1;j<tcase;j++){
        if(v[i].first==v[j].second){
                sum++;
//                    cout<<j<<endl;

        }
        if(v[i].second==v[j].first){
            sum++;
        }

}
    }


cout<<sum;



}




