
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;

while(tcase--){




int n,a,b;
cin>>n>>a>>b;
vector<int>v(n);
int left,right;

//Check if possible or not
if(a<b){

    left= n-a-1;
    right=b-1-1;

}
else if(a>b ){

    left=n-a;
    right=b-1;

}
int len=(n/2)-1;
//
if(left<len || right<len){


    cout<<-1<<endl;

}

else{
        //finding the array sequence
int cnt=n;

v[0]=a;
v[n-1]=b;

for(int i=1;i<n-1;i++ ){


    if(a==cnt || cnt==b ){
        cnt--;

    }

     if(a==cnt || cnt==b){
        cnt--;
    }

    v[i]=cnt;
    cnt--;



}



for(int i=0;i<n;i++){

    cout<<v[i]<<" ";

}
cout<<endl;



}






}







}









