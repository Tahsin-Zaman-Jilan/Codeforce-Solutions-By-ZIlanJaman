#include<bits/stdc++.h>
using namespace std;
int main(){
int tcase,sum=0;
string str;

cin>>tcase>>str;
    for (int j = 0; j < tcase; j++) {
        int c = str[j];
        if (islower(c)){
            str[j] = toupper(c);
        }
    }



sort(str.begin(),str.end());
for(int i=0;i<tcase;i++){
    if(str[i]!=str[i+1]){
        sum++;
    }
}

 //cout<<len<<endl;
if(sum==26 ){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}



}

