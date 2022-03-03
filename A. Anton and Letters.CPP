#include<bits/stdc++.h>
using namespace std;
int main(){
int len=0;
string A;

getline(cin,A);
sort(A.begin(),A.end());
for(int i=0;i<A.size()-1;i++)
{
    if(A[i]=='{}' || A[i]==',' || A[i]==' '){ continue;}
    else{
        if(A[i]!=A[i+1]){
            len++;
        }
    }
}


cout<<len-1;
}
