#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;

        cin >> a;
        int b;

        cin >> b;
        int c;

        cin >> c;
        int n;

        cin >> n;

        int total = a + b + c + n;
        if (total % 3 != 0)
            cout << "NO" << endl;
        else
        {   
            // tum kiseah seah mangkar kise aur ko coin nahi de sakte na 
            if (a > total / 3 || b > total / 3 || c > total / 3)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

}

