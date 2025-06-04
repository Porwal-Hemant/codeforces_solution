#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

vector<int> fib(10);  // global vector of size 10

void precomputeFib() {
    fib[0] = 1;  // f1
    fib[1] = 2;  // f2

    for (int i = 2; i < 10; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

void solve() {
    int n, m;  
    cin >> n >> m;

    int biggerSide = fib[n - 1];  
    int smallerSide = fib[n - 2];

    vector<vector<int>> boxes(m, vector<int>(3));  // storing all boxes as {width, length, height}

    for (int i = 0; i < m; i++) {
        cin >> boxes[i][0] >> boxes[i][1] >> boxes[i][2];  // width, length, height
    }

    string ans = "";

    for (int i = 0; i < m; i++) {
        int width = boxes[i][0];
        int length = boxes[i][1];
        int height = boxes[i][2];

        if (height < biggerSide || min(width, length) < biggerSide) {
            ans += '0';
            continue;
        }

        if (max(width, length) >= (biggerSide + smallerSide)) {
            ans += '1';
            continue;
        }

        if (height >= (biggerSide + smallerSide)) {
            ans += '1';
            continue;
        }

        ans += '0';  // none of the conditions satisfied
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("D:/CodeForces/input", "r", stdin);
    freopen("D:/CodeForces/output", "w", stdout);
#endif

    precomputeFib();  // initializing global fib vector

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
