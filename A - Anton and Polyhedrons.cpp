#include<bits/stdc++.h>
using namespace std;
int main(){

int sum=0,tcase;
string str;
cin>>tcase;
for(int i=0;i<tcase;i++){
    cin>>str;
    if(str=="Icosahedron"){ sum=sum+20;}
    else if (str=="Cube"){ sum=sum+6;}
    else if (str=="Tetrahedron"){ sum=sum+4;}
    else if (str=="Dodecahedron"){ sum=sum+12;}
     else if (str=="Octahedron"){ sum=sum+8;}



}
cout<<sum<<endl;

}

