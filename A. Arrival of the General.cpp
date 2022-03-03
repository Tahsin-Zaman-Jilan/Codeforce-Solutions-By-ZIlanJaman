#include<bits/stdc++.h>
using namespace std;
int main()
{
   int case1,hei,sum=0,maxv=0,minv=1000,store1=0,store2=0;
   cin>>case1;

   for(int i=0;i<case1;i++){
    cin>>hei;
    if(maxv<hei){
        maxv=hei;
        store1=i;
    }
    if(hei<=minv){
	store2=i;
	minv=hei;

    }
   }
   if(store1>store2){

   cout<<(store1-1)+(case1-store2)-1;

}

else{
	cout<<(store1-1)+(case1-store2);}

}
