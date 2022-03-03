#include<bits/stdc++.h>
using namespace std;
int main()
{
   int level,case1,A,case2,B,ans;
   set<int>s;
   cin>>level;
   cin>>case1;
   for(int i=0;i<case1;i++){
    cin>>A;
    s.insert(A);
   }
 cin>>case2;
for(int i=0;i<case2;i++){
    cin>>B;
    s.insert(B);
   }
   ans=s.size();
   if(ans==level){
    cout<<"I become the guy.";
   }
   else{
    cout<<"Oh, my keyboard!";
   }
}
