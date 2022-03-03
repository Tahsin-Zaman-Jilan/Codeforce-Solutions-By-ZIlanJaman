#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


int tcase;
cin>>tcase;

while(tcase--){


int t;
cin>>t;

string str;
cin>>str;
int inf=1e9;

for(int i='a';i<='z';i++){

int ans=0;

    int start=0;
    int  endx=t-1;

    while(start<=endx){

        if(str[start]!=str[endx]){

            if(str[start]==i){
                ans++;
                start++;
            }

            else if(str[endx]==i){
                ans++;
                endx--;
            }

            else{

                ans=1e9;
                break;
            }

        }

        else{
            start++;
            endx--;
        }



    }

     inf=min(ans,inf);

}

if(inf==1e9){
    cout<<-1<<endl;
}

else{
cout<<inf<<endl;
}
}








}






