#include<bits/stdc++.h>
using namespace std;

int main() {
    int length,sum=0;
char str[101];
 scanf("%str",str) ;
length=strlen(str);
for (int i=0;i<=length;i++) {
 for (int j=i+1;j<length;j++){
    if(str[i]==str[j] ){  sum+=1;
    break;

    }
 }
}
length=length-sum;
if (length%2==0){ cout<<"CHAT WITH HER!";}
else { cout<<"IGNORE HIM!";}

}
