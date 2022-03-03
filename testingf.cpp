#include <bits/stdc++.h>
using namespace std;


int dp[2001][2001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);









    int t;
    cin>>t;
    vector<int>v;
    for(int i=0;i<t;i++){

        int a;
        cin>>a;
        v.push_back(a);
        dp[i][0]=a;
    }
int cnt;
    for(int i=0;i<t;i++){

    for(int j=0;j<t;j++){

        if(v[i]==v[j]){
            cnt++;
        }

    }


    cout<<dp[1][0]<<endl;

}
}
