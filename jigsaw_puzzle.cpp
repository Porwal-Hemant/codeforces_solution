#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <cmath>
#include <stack>
// #define mod 1e9+7;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long sum = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            double root = sqrt(sum);
            if (root == (int)root && ((int)root) % 2 != 0)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}


