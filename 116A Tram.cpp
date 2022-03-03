    #include<bits/stdc++.h>
    using namespace std;

    int main() {
        int a,b,n,sum=0,highest=0;
        cin>>n;
    for (int i=0;i<n;i++) {
    cin>>a>>b;
    sum=sum+(b-a);
    if (sum>highest){ highest=sum;}
    }
    cout<<highest;
    }

