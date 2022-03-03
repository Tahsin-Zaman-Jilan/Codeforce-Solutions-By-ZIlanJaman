#include<bits/stdc++.h>
using namespace std;
int main(){
int sum=0,tcase;
string str;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>str;
    if(str=="X++" || str=="++X"){
        sum++;
    }
    else if(str=="X--" || str=="--X" ){
        sum--;
    }

}

cout<<sum;
}
