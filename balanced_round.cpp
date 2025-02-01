#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n; // number of problems

        int k; // maximum allowed absolute difference between consecutive problems

        cin >> n >> k;

        vector<int> numbers(n);

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        sort(numbers.begin(), numbers.end());

        int maxCount = 0;

        int currentCount = 0;

        vector<int> differences;

        for (int i = 1; i < n; i++)
        {
            int difference = numbers[i] - numbers[i - 1];
            differences.push_back(difference);
        }

        // for (int i = 0; i < differences.size(); i++)
        // {
        //     cout << differences[i] << " ";
        // }

        // cout << endl;
        // cout << endl;

        for (int i = 0; i < differences.size(); i++)
        {
            if (differences[i] > k)
            {
                maxCount = max(maxCount, currentCount);
                currentCount = 0;
            }
            else
            {
                currentCount++;
            }
        }
        maxCount = max(maxCount, currentCount);
        int answer = (n - (maxCount + 1));

        cout << answer << endl;
    }
}
