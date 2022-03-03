#include<bits/stdc++.h>
using namespace std;
int main(){

    int A,B;
    cin>>A>>B;
    if(A>B){
        A=A+A-1;
        cout<<A;

    }
    else if(A==B){
        A=A+A;
        cout<<A;
    }
    else{
        B=B+B-1;
        cout<<B;
    }

}
