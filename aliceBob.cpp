#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;

        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {

            cin >> a[i];

        }

        bool checker = false;

        map<int, int> freqMap;

        for (int i = 0; i < n; ++i)
        {

            freqMap[a[i]]++;

        }

        for( auto it : freqMap ) 
        {
            if( it.second % 2 != 0 ) 
            {
                checker = true ;  
                break  ;  
            }
        }

        if (!checker)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
