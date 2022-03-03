#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#file input
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s,
        H = "hello";
    cin >> s;
    int j = 0, found = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == H[j])
        {
            j += 1;
            found += 1;
            if (found == 5)
            {
                break;
            }
        }
    }
    if (found == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
