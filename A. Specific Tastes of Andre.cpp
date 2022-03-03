#include<bits/stdc++.h>
using namespace std;
int main(){
int t_case,g,j,k;
cin>>t_case;
for(int i=0;i<t_case;i++){
    int a;
   cin>>a;
   for( j=0; ;j++){
    for(  k=0; ;k++){
        if(j*k%a==0){
           g=(j*k/a);
           cout<<k<<" ";
           break;
        }
        cout<<j;
    }
   }

}


}
