#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tcase,S,D,X,Y,sum=0;
    cin>>tcase>>S>>D;
    for(int i=0;i<tcase;i++){
    cin>>X>>Y;
    if(X<S && Y>D){
        sum++;
    }

}
if(sum>0){
    cout<<"Yes";
}
else{
    cout<<"No";
}
}
