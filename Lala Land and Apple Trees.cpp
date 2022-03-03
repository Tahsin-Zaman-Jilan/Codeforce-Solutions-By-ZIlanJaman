#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


ll tcase;
cin>>tcase;
int t=tcase;
 vector<pair<int, int> >v;
  vector<pair<int, int> >v1;


  while(tcase--){



    int a,b;
    cin>>a>>b;




    if(a<0){

        v.pb(make_pair(a,b));

    }

    else {

       v1.pb(make_pair(a,b));
    }



  }
sort(v.begin(), v.end(),greater<pair<int, int> >());
  sort(v1.begin(), v1.end());


  int len=v.size();
  int len1=v1.size();

//  cout<<"Len of v "<<len<<" Len1 of v1 "<<len1<<endl;

int   sum=0;
  if(len==len1){

    for(int i=0;i<len;i++){

        sum+=v[i].second;
          sum+=v1[i].second;


    }


  }


  else if(len>len1){

    for(int i=0;i<len1;i++){

        sum+=v[i].second;
          sum+=v1[i].second;


    }

 sum+=v[len1].second;


  }
     else {


     for(int i=0;i<len;i++){

        sum+=v[i].second;
          sum+=v1[i].second;


    }

sum+=v1[len].second;


  }

  cout<<sum;

}











