#include<bits/stdc++.h>
using namespace std;

int main() {
int subtractTheNumber,sum;
cin>>subtractTheNumber>>sum;
for(int i=0;i<sum;i++) {
    if (subtractTheNumber%10!=0) {
        subtractTheNumber=subtractTheNumber-1;}
    else {
        subtractTheNumber=subtractTheNumber/10;
    }
}

cout<<subtractTheNumber;
}

