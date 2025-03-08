#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl
void solve1()
{
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int count = 0;

    for (int i = n - 1; i > 0; i--)
    {
        if (numbers[i] == 0)  // If any element reaches zero, it's impossible
        {
            cout << "-1" << endl;
            return;
        }

        while (numbers[i - 1] > 0 && numbers[i - 1] >= numbers[i])
        {
            numbers[i - 1] /= 2;
            count++;
        }
    }

    cout << count << endl;
}

void solve()
{

    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
  //  [ 0 0 ] vale case mai 
    int count = 0;

    for (int i = n - 2; i >= 0; i--)
    {   

        if( numbers[i+1] == 0 ) 
        {
            cout << "-1" << endl;
            return; 
        }

        while (numbers[i] >= numbers[i+1] )
            {
                count++;
                numbers[i] /= 2;

                if (numbers[i] == 0 && i != 0 ) // Ensure it does not become zero mid-process
                {
                    cout << "-1" << endl;
                    return;
                }
            }
    }

    cout << count << endl;
 
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
