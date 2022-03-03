#include<iostream>
#include<string>
using namespace std;

int main(){
int i;
char word[20];
cin>>word;

for (i=0;i<strlen(word);i++) {
if(word[i]>=97 && word<=122){
word[i]=word[i]-32;
}
}
cout<<word;

}
