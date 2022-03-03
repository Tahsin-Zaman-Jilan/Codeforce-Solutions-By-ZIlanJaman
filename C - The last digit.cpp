#include<bits/stdc++.h>
using namespace std;

int main () {

int T,a;
int b,power=1;
cin>>T;
for (int i=0;i<T;i++) {
    cin>>a>>b;
    for(int j=1;j<=b;j++ ) {
        power=power*a;
    }

power=power%10;
cout<<power;
power=1;

}
}
