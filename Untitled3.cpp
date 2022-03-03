#include <iostream>
using namespace std;

int main()
{

    char str[1000];
    cin>>str;
    for (int i=0; i<1; i++){
    if(str[i]>=97 && str[i]<=122)
      {
		str[i]=str[i]-32;
      }
    }
cout<<str;
    }


