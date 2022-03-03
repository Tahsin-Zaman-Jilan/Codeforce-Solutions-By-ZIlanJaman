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

while(tcase--){

ll n;
cin>>n;
vector<ll>v;

for(int i=0;i<n;i++){
ll a;
cin>>a;
v.pb(a);

}




 ll ans=0;
	        for (int j = 1; j <= n; j++) {
	            for (int i = 0; i <= n - j; i++) {
	            	vector<ll>v1;
	                ll check = i + j - 1;
	                for (int k = i; k <= check; k++) {
	                	if(v[k]==0) {
	                		v1.pb(0);
	                	}
	                }

                    ans+=v1.size();
	            }
	        }




	        ll ans2=(n*(n+1)*(n+2))/6;

	        ans=ans+ans2;

	        cout<<ans<<endl;


}








}








