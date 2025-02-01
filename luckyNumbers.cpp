#include <bits/stdc++.h>
#define int long long
using namespace std;

int solve(int n)
{
    if (n == 1)
    {
        return 2;
    }

    return ((1LL << n) + solve(n - 1));
}

int32_t main()
{

        int n;
        cin >> n;

        int ans = solve(n);

        cout << ans << endl;
    
}

