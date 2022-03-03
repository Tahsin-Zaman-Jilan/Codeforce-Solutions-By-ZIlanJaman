#include<bits/stdc++.h>
using namespace std;
int main(){

int A,B,i;

    cin >> A>> B;
    if (A > B) {
        i = B;
    } else {
        i = A;
    }
    if (i % 2 == 0) {
        cout << "Malvika";
    } else {
        cout << "Akshat";
    }
}


