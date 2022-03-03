#include<bits/stdc++.h>
using namespace std;
int main(){
int tcase,elem,A=0,B=0,C=0;
vector<int>v;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>elem;
    v.push_back(elem);

}
for(int i=0;i<tcase;i++){
        if(i%3==0){
    A=A+v[i];}
    if(i%3==1){
    B=B+v[i];}
     if(i%3==2){
    C=C+v[i];}


}
//cout<<A<<" "<<B<<" "<<C<<" ";
if(A>B && A>C){
    cout<<"chest";
}
else if(B>A && B>C){
    cout<<"biceps";
}
else if(C>A && C>B){
cout<<"back";
}
}
