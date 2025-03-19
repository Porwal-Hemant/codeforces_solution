#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve1()
{
    int n, m;
    cin >> n >> m;
    // n is equal to number of planks
    // m is equal to number of diff colours
    // second line contains m integers
    vector<int> numbers;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        int temp = min(x, n - 1);
        numbers.push_back(temp);
    }

    sort(numbers.begin(), numbers.end());

    vector<int> sumStore(m);

    int sum = numbers[m - 1];
    sumStore[m - 1] = numbers[m - 1];

    for (int i = m - 2; i >= 0; i--)
    {
        sum = sum + numbers[i];
        sumStore[i] = sum;
    }

    // cout << "SUM -> " << sum << endl ;

    // for( int i = 0 ;  i < m ; i++ )
    // {
    //     cout << sumStore[i] <<  " "  ;
    // }
    // cout << endl ;

    int ans = 0;

    for (int i = 0; i < m; i++)
    {
        // iske aandar binary search lagana hai

        int firstIndex = 0;      // 1
        int secondIndex = m - 1; // 2

        int sum = 0;
        int temp = -1;
        // int req = n - numbers[i];

        while (firstIndex <= secondIndex)
        {
            int mid = (firstIndex + secondIndex) / 2;

            if (numbers[mid] + numbers[i] >= n)
            {
                temp = mid;
                sum = sumStore[mid];
                secondIndex = mid - 1;
            }
            else
            {
                firstIndex = mid + 1;
            }
        }

        // cout << temp;
        // cout << "MID" << temp <<  endl ;

        ans += sum + (m - temp) * (numbers[i] - n + 1);
        // cout << "ans" << ans <<  endl ;
    }

    int tosub = 0;

    for (int i = 0; i < m; i++)
    {
        int temp = numbers[i];
        if (temp * 2 < n)
        {
            continue;
        }

        tosub += (temp * 2) - n + 1;
    }

    ans -= tosub;

    cout << ans << endl;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    // n is equal to number of planks
    // m is equal to number of diff colours
    // second line contains m integers
    vector<int> numbers;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        int temp = min(x, n - 1);
        numbers.push_back(temp);
    }

    sort(numbers.begin(), numbers.end());

    vector<int> sumStore(m);

    int sum = numbers[m - 1];
    sumStore[m - 1] = numbers[m - 1];

    for (int i = m - 2; i >= 0; i--)
    {
        sum = sum + numbers[i];
        sumStore[i] = sum;
    }

    // for (int i = 0; i < m; i++)
    // {
    //     cout << sumStore[i] << endl;
    // }
    // cout << "sumStore array done ->" << endl;
    int ans = 0;

    for (int i = 0; i < m; i++)
    {
        // iske aandar binary search lagana hai

        int firstIndex = i + 1 ;      // 1
        int secondIndex = m - 1; // 2

        int sum = 0;
        int temp = -1;
        // int req = n - numbers[i] ;

        while (firstIndex <= secondIndex)
        {
            int mid = (firstIndex + secondIndex) / 2;

            if (numbers[mid] + numbers[i] >= n)
            {
                temp = mid;
                sum = sumStore[mid];
                secondIndex = mid - 1;
            }
            else
            {
                firstIndex = mid + 1;
            }
        }

        // cout << "i->" << i << "SUM -> " << sumStore[temp] << endl;
        // cout << "(m - temp) ->" << (m - temp) << endl;
        // cout << "temp->" << temp << endl;
        // cout << "N->" << n << endl;
        // cout << "numbers[i] ->" << numbers[i] << endl;
        if (temp != -1)
        {
            ans = ans + 2 * (sumStore[temp] + ((m - temp) * (numbers[i] - n + 1)));
        }

        // cout << "i->" << i << "ans->" << ans << endl;
    }

    // cout << "IMP ANS -> " <<  ans << endl;
    cout << ans << endl ;  
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
