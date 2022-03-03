#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase,a,b,area,s_area=2;
cin>>tcase;
while(tcase--){
        cin>>a>>b;
        area=a*b;
        area=area+area;
for(int i=1;s_area<area;i++){

s_area=pow(2,i);
}
    cout<<s_area<<endl;
    s_area=2;

}






}




