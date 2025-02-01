#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n; // number of lights
        cin >> n;

        vector<int> switches(2 * n);

        int oneCount = 0;

        for (int i = 0; i < switches.size(); i++)
        {
            cin >> switches[i];

            if (switches[i] % 2 == 1)
            {
                oneCount++;
            }

        }

        if (oneCount == (2 * n))
        {   
            // sab one hai  ( sab 2 bar toggle ho jayenge )
            cout << 0 << " " << 0 << endl;
            continue  ;  
        }

        int zeroCount = (2 * n) - oneCount;

        if (oneCount <= n)
        {
            int maxi = oneCount;

            int mini = oneCount % 2;

            cout << mini << " " << maxi << endl;
            continue;
        }

        else if (oneCount > n)
        {
            int maxi = zeroCount;
            int mini = oneCount % 2;

            cout << mini << " " << maxi << endl;
            continue;
        }
    }
}
