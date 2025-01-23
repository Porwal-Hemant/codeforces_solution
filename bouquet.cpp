#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

int solve1()
{

    int n, m;

    cin >> n >> m;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers[i] = x;
    }

    sort(numbers.begin(), numbers.end());
    int startIndex = 0;

    int ans = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + numbers[i] ;  

        while( sum > m || ( startIndex < n && (numbers[i] - numbers[startIndex]) > 1 ) ) 
        {
              sum = sum - numbers[startIndex] ;  
              startIndex++ ;    
        }

        ans = max( ans , sum  ) ; 

    }

    return ans  ;  

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

        int ans = solve1();

        if (ans == -1)
        {

            cout << 0 << endl;
        }

        else
        {

            cout << ans << endl;
            // solve1() 2 bar nahi call hoga
        }
    }

    return 0;
}




/* 

bool isPossible(vector<int> numbers, int m, int mid)
{

    int cost = numbers[0]; // edge case already covered

    int diff = numbers[0];

    int firstIndex = 0;

    for (int i = 1; i < numbers.size(); i++)
    {
        cout << "itteration -> " << i << endl;

        if ((numbers[i] - diff) <= 1 && cost + numbers[i] <= m)
        {
            // difference between any two consecutive flowers should not exceed one
            cost = cost + numbers[i];
            debug(cost);

            if (cost >= mid)
            {
                // matlab itne pettals toh possible hai
                return true;
            }
        }
        else
        {
            cost = numbers[firstIndex + 1];
            diff = numbers[firstIndex + 1];
            // koe aur segment pakarne parenge since difference
            debug(cost);
        }
    }

    return false;
}

int solve()
{

    int n, m;

    cin >> n >> m;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers[i] = x;
    }

    sort(numbers.begin(), numbers.end());

    // 1 1 1 2 4 5 6 7

    int low = 0;
    int high = m;

    int ans = -1;

    if (numbers[0] > m)
    {
        return -1; // not possible
    }

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isPossible(numbers, m, mid))
        {
            ans = mid;
            low = mid + 1; // aur petals ko aandar bharne ka try karo
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

*/