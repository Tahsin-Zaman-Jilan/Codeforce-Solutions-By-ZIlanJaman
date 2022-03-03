#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);




int A,B,sum=0;
cin>>A>>B;
for(; ;){

    A=A*3;
    B=B*2;
    sum++;
    if(A>B){
        break;
    }
}

cout<<sum;

}





