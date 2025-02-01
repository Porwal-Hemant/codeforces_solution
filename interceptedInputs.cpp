#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k; //   total number of inputs

        map<int, int> freqMap;

        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            // doing in inorder to fullfill question requirement of input
            freqMap[x]++;
        }

        int n;

        int m;

        int mxn = k - 2; // beacuse they contain n and m also

        // n and m should be contained within k integers
        // ceil((double)mxn / j )   -> yeah idea isliye fail hoga kyoki complete matrix construct karne hai ( 3 x 4 means 3 rows har row ke 4 columns fill)
        for (int j = 1; j <= mxn; j++)
        {
            //  ( mxn % j ) == 0  &&
            int l = (mxn / j);
            if ((freqMap.find(j) != freqMap.end()) && (freqMap.find(l) != freqMap.end()) && (l * j == mxn))
            {
                n = j;
                m = l;

                break;
            }
        }

        cout << n << " " << m;

        cout << endl;
    }
}


