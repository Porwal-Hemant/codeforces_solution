#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        int y;
        cin >> x >> y;

        map<int, int> visited;

        if (x == 1 && y > x)
        {
            cout << "NO" << endl;
            continue;
        }

        if (x != 1 && x >= y)
        {
            cout << "YES" << endl;
            continue;
        }

        bool checker = false;

        while (y > x)
        {
            if (x == 1)
            {
                cout << "NO" << endl;
                checker = true;
                break;
            }

            if (visited[x] == 1)
            {
                // ghum firkar vapas aa gaye dost
                cout << "NO" << endl;
                checker = true;
                break;
            }

            if (x % 2 != 0)
            {

                visited[x] = 1;
                x = x - 1;
            }
            else if (x % 2 == 0)
            {

                visited[x] = 1;
                x = (x * 3) / 2;
            }
        }

        if (checker == false)
        {
            cout << "YES" << endl; // nahi hona hoga toh while loop seah hee return ho jayga
        }
    }
}
