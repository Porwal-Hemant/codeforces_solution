#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl '\n'

void solve() {
    int n, first = -1, second = -1, first1 = -1, second1 = -1;
    cin >> n;
    vector<int> a(n), a1(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a1[i];
    }

    // Find the first index where the arrays differ
    for (int i = 0; i < n; i++) {
        if (a[i] != a1[i]) {
            first = i;
            break;
        }
    }

    // Find the last index where the arrays differ
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != a1[i]) {
            second = i;
            break;
        }
    }

    // Expand the range leftwards as long as non-decreasing
    for (int i = first; i > 0; i--) {
        if (a1[i] >= a1[i - 1]) {
            first1 = i - 1;
        } else {
            break;
        }
    }

    // Expand the range rightwards as long as non-decreasing
    for (int i = second; i < n - 1; i++) {
        if (a1[i] <= a1[i + 1]) {
            second1 = i + 1;
        } else {
            break;
        }
    }

    // Output the 1-based index range
    if (first1 != -1) {
        cout << first1 + 1 << " ";
    } else {
        cout << first + 1 << " ";
    }

    if (second1 != -1) {
        cout << second1 + 1 << endl;
    } else {
        cout << second + 1 << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("D:/CodeForces/input", "r", stdin);
    freopen("D:/CodeForces/output", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
