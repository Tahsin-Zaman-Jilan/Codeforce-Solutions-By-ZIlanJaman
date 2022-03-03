#include<bits/stdc++.h>
using namespace std;

int main() {
    int Co_ordinate,sum=0;
    cin>>Co_ordinate;
    if (Co_ordinate<6){
        sum=1;
    }
    else{
        if (Co_ordinate%5==0) {
            sum=Co_ordinate/5;
        }
        else {
            sum=(Co_ordinate/5) +1;
        }
    }
cout<<sum;
}
