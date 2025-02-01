#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> ans(n + 1); // One-based indexing

        // Fill elements from y to x as 1
        for (int i = y; i <= x; ++i)
        {
            ans[i] = 1;
        }

        // Fill elements before y with alternating -1 and 1, starting with -1
        for (int i = y - 1, val = -1; i >= 1; --i, val *= -1)
        {
            ans[i] = val;
        }

        // Fill elements after x with alternating -1 and 1, starting with the correct value
        for (int i = x + 1, val = -1; i <= n; ++i, val *= -1)
        {
            ans[i] = val;
        }

        // Output the result for this test case
        for (int i = 1; i <= n; ++i)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
