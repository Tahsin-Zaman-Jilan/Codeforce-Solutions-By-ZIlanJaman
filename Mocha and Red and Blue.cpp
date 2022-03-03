#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);




int tcase;
cin>>tcase;

while(tcase--){

    int a;

    cin>>a;



        string str;

        cin>>str;

        int b=false;
        string ans;

        for(int i=0;i<a;i++){

            if(str[i]=='B' ){

                ans+=str[i];
                b=true;
            }

            else if( str[i]=='R'){

                ans+=str[i];
                b=false;
            }

            else if( b==false && str[i+1]!='B'){

                ans+='B';
                b=true;

            }
             else if( b==false && str[i+1]=='B'){

                ans+='R';
                b=false;

            }



            else if(b==true &&  str[i+1]!='R'){

                ans+='R';
                b=false;
            }
 else if(b==true &&  str[i+1]=='R'){

                ans+='B';
                b=true;
            }



else if(b==false){
    ans+='B';
    b=true;
}

else if(b==true){

    ans+='R';
    b=false;

}



        }



        cout<<ans<<endl;








}



}






