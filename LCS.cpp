#include <bits/stdc++.h>
using namespace std;
const int MD=1e9+7;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

 string a,b;
 cin>>a>>b;

 int m=a.size();
 int n=b.size();

 vector < vector < int > >v(m+1, vector< int >(n+1,0));




 for(int i=1;i<=m;i++){

    for(int j=1;j<=n;j++){
if(v[i][j]!=0){
        break;

}

        if(a[i-1]==b[j-1]){

            v[i][j]=v[i-1][j-1]+1;
        }


        else {
            v[i][j]=max(v[i-1][j],v[i][j-1]);


        }





    }


 }





 string lcs="";
int c=m;
int d=n;
 while(c!=0 && d!=0){

    if(v[c][d]==v[c-1][d]){
        c--;

    }


    else if( v[c][d]==v[c][d-1]){
        d--;
    }

    else {
        lcs=a[c-1]+lcs;
    c--;
    d--;

    }

 }


 cout<<lcs;



 }
 //axyb
//abyxb
















