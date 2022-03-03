#include <bits/stdc++.h>

using namespace std;

int main()
{
    string m;
    int n,c=0,c1=0;
    cin>>n;
    cin>>m;
    sort(m.begin(),m.begin()+n);
    sort(m.begin()+n,m.end());


    cout<<m<<endl;
    for(int i=0 ; i<n; i++)
    {
           if(m[i]>m[i+n])
           {
             c++;
             cout<<i<<" NOW its " <<m[i]<<endl;
           }
           else if(m[i]<m[i+n])
           {
             c1++;
             cout<<i<<" NOW its " <<m[i+n]<<endl;
           }

        }
    if(c==n ||c1==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}


