#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{

    int t;
    cin >> t;

    for (int ii = 0; ii < t; ii++)
    {
        int X;
        cin >> X;

        int Y;
        cin >> Y;

        int K;
        cin >> K;

        int result = static_cast<int>(ceil(K / sqrt(2)));

        // cout << "Result - "  << result << endl ; 

        cout << 0 << " " << 0 << " " << result << " " << result << endl ;  
        cout << 0 << " " << result <<  " " << result << " " << 0 << endl  ;  
    }
}

