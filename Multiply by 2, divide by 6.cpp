#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

long long tcase;
cin>>tcase;
while(tcase--){
    long long t,cnt1=0,cnt2=0;
    cin>>t;


  while(t%2==0)

        {
            cnt1++;
            t=t/2;
        }


     while(t%3==0){
            cnt2++;
            t=t/3;
        }

if (t == 1 && cnt1 <= cnt2) {
			cout << 2 * cnt2 - cnt1 << endl;
		} else {
			cout << -1 << endl;
		}

}






}







