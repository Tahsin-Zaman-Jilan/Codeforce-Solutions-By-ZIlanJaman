#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int>V;
  cout<<V.size()<<endl;
  V.push_back(10);
  V.push_back(20);
   V.push_back(20);
  cout<<V.size()<<endl;
  cout<<V[0]<<endl;
  V.pop_back();
   cout<<V.size()<<endl;


   for(int i=0;i<V.size();i++) {
    cout<<V[i]<<endl;
    cout<<"\n";
    cout<<"\n";
     cout<<"\n";
     vector<int>ve{10,20,30};
     for(int j: ve){
        cout<<" "<<j<<endl;


     vector<string>va;
     va.push_back("Hello");
     va.push_back("Bro");
     for(string k : va){
        cout<<" "<<k;
     }
     }


   }
}
