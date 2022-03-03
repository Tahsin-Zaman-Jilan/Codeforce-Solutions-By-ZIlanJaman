#include<bits/stdc++.h>
using namespace std;
int main()
{

	long long int n;

    cin>>n;

    vi set;
    ll sum = 0;

    while(n)
	{
        ll rem = n % 10;
        sum += rem;
        set.pb(rem);
        n /= 10;
    }

    ll re = sum % 3;

    if(re == 0)
    {
        cout<<'0';
        exit(0);
    }

    ll size = set.size();
    ll mini = INT_MAX;

    // cout<<set.size();

    ll lsum = 0;
    ll rsum = 0;

    for(ll i = 0 ; i < size ; i++)
    {

        lsum += set[i];
        rsum += set[size - i - 1];

        // cout<<lsum<<" "<<rsum;

        if(lsum % 3 == 0)
            mini = min((size - i - 1) , mini);
        if(rsum % 3 == 0)
            mini = min(size - i - 1 , mini);
    }

    for(ll i = 0 ; i < (1 << size) ; i++)
    {
        ll temp = 0;
        for(ll j = 0 ; j < 32; j++)
        {
            if(i & (1 <<j))
                temp += set[j];

        }
        if(temp % 3 == re)
        {
            if(sbit(i) < size - 1)
                mini = min(sbit(i) , mini);
        }
    }
    if(mini == INT_MAX)
        cout<<"-1";
    else
        cout<<mini;
	return 0;
}
