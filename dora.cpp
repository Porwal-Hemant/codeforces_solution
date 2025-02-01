#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        ll a, b;
        ll n;
        cin >> n;

        cin >> a >> b;

        ll g = __gcd(a, b);

        vector<ll> v(n);

        for (auto i = 0; i < n; i++)
        {
            cin >> v[i];

            v[i] = v[i] % g;
        }

        sort(v.begin(), v.end());
        ll min_val = v[n - 1] - v[0];

        for (auto i = 0; i < n - 1; i++)
        {
            min_val = min(min_val, v[i] + g - v[i + 1]);
        }

        cout << min_val << endl;
    }
}

