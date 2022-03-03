#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;
while(tcase--){

    int a,b,c;
    cin>>a>>b>>c;

    int total=abs(a-b);
    total=total*2;
//cout<<"Total"<<total<<endl;
    if(a>total || b>total || c>total){

         cout<<-1<<endl;

    }
    else{
            if(c+total/2<=total){
            cout<<c+total/2<<endl;
         }
    else{
          cout<<c-total/2<<endl;
    }







    }
}


}














