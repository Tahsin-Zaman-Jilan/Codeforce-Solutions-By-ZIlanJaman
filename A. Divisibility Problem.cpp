#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tcase, A,B,div;
    cin>>tcase;
    for(int i=0;i<tcase;i++){
        cin>>A>>B;
        if (A % B == 0) cout << 0 << endl;
		else cout << B - A % B << endl;
    }
}
