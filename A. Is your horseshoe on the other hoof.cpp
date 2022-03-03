#include<bits/stdc++.h>
using namespace std;
int main()
{

    int shoes,sum;
    set<int>s;
    for(int i=0;i<4;i++){
        cin>>shoes;
        s.insert(shoes);
    }
    sum=s.size();
        sum=4-sum;
    cout<<sum;
}
