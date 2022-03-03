
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);





int a,b,c,d,e,f,g,h;

cin>>a>>b>>c>>d>>e>>f>>g>>h;



int ans=b*c;
int ans2=ans/g;
int ans3=d*e;
int ans4=f/h;

int Ans=min(ans2,ans3);

Ans=min(Ans,ans4);

Ans=Ans/a;

cout<<Ans;





}

















