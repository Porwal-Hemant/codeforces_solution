#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve()
{
    int n;
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int sum = numbers[0];

    int maxSum = numbers[0];

    bool checker;

    // checker = true for even and false for odd

    if ( numbers[0] % 2 == 0)
    {
        checker = true;
    }
    else
    {
        checker = false;
    }

    for (int i = 1; i < n; i++)
    {
        bool currentCheck ; 


        if( numbers[i] % 2 == 0)
        {
            currentCheck = true;
        }
        else
        {
            currentCheck = false;
        }

        // if statement corresponds to the same parity  
        if( currentCheck == checker)
        {

            sum = numbers[i] ;   // I can't add prev elem sum in this 

        }
        else
        {

            sum = sum + numbers[i];

            if (numbers[i] > sum)
            {
                sum = numbers[i];
            }

            checker = currentCheck; // update the checker to the current parity
        }

        maxSum = max(maxSum, sum);
    }

    cout << maxSum << endl;
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
