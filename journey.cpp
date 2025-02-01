#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, a, b, c;

        cin >> n >> a >> b >> c;

        int count = 0;

        int firstMove = a;
        int secondMove = b;
        int thirdMove = c;

        int fullmoves = 3 * (n / (a + b + c));

        n = n % (a + b + c);

        int ans = 0;

        if (n)
        {
            if (n <= a)
                ans++;
            else if (n <= a + b)
                ans += 2;
            else
                ans += 3;
        }

        cout << (fullmoves) + ans << endl;
    }
}
