#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve()
{   
    int n ;  
    cin >> n ; 
    string s;
    cin >> s;                   // Read the input string
    int count_ones = 0;         // To count the number of ones
    int count_consec_zeros = 0; // To count pairs of consecutive zeros
    int current_zeros = 0;      // To track current sequence of zeros

    for (char c : s)
    {
        if (c == '1')
        {
            count_ones++; // Increment count for '1'
            if (current_zeros > 0)
            {
                count_consec_zeros++; // Increment count for consecutive zeros
                current_zeros = 0;    // Reset current zero count
            }
        }
        else if (c == '0')
        {
            current_zeros++; // Increment current zero count
        }
    }

    // Check if there were trailing zeros at the end of the string
    if (current_zeros > 0)
    {
        count_consec_zeros++;
    }

    // Output based on the comparison of counts
    // cout << "cons zeros -> " << count_consec_zeros << endl;
    // cout << "cons ones ->" << count_ones << endl;
    if (count_consec_zeros >= count_ones)
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("D:/CodeForces/input", "r", stdin);
    freopen("D:/CodeForces/output", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}
