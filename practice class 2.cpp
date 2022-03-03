#include<bits/stdc++.h>
using namespace std;

int main() {
int a=10;
int &a2=a;
a2=20;
//cout<<a<<endl<<a2;
vector<int>v{2,3,4};
for(int x:v) {
    cout<<x<<endl;
}
auto it=v.begin();
cout<<*it<<endl;
//found function

it=(find(v.begin(),v.end(),3));
int pos=it-v.begin();
cout<<pos<<endl;


}
