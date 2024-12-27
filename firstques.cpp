#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector<int> numbers(n);

        int zeroCount = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];

            if (numbers[i] == 0)
            {
                zeroCount++;
            }
        }

        int numberOfClusters = 0;
        if (numbers[0] != 0)
        {
            numberOfClusters++;
        }
        for (int i = 1; i < n; i++)
        {
            if (numbers[i - 1] == 0 && numbers[i] != 0)
            {
                numberOfClusters++;
            }
        }

        if (zeroCount == 0) // zero hai hee nahi
        {
            cout << 1 << endl;
        }
        else if (zeroCount == (n)) // saare toh zeros hai
        {
            cout << 0 << endl;
        }
        else // depends on element cluster
        {
            if (numberOfClusters == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
}
