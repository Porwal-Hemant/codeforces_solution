#include <bits/stdc++.h>
#include <algorithm>
#define int long long

using namespace std;


/*

Even though extracting a fixed-length substring is constant per call, it creates a new string object each time. This involves:

Memory Allocation: Allocating memory for the new string.
Copy Overhead: Copying characters into the new string.
These operations have a constant cost for fixed-length substrings but can still add up significantly when called repeatedly in loops.

*/
bool reqStringHolder(string s, int i)
{
    if ((i + 3) >= s.length())
    {
        // this is not forming 4 size string
        return false;
    }
    else
    {
        if (s.substr(i, 4) == "1100")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int32_t main()
{

    int t;
    cin >> t;

    for (int ii = 0; ii < t; ii++)
    {

        string s;

        cin >> s;

        int count = 0;

        for (int j = 0; j < s.length() - 3; j++)
        {
            if (s[j] == '1' && s[j + 1] == '1' && s[j + 2] == '0' && s[j + 3] == '0')
            {
                count = count + 1;
            }
        }

        int q; // number of queries

        cin >> q;

        for (int i = 0; i < q; i++)
        {
            int w; // index of query

            cin >> w;

            w = w - 1;

            int v; // describing query

            cin >> v;

            bool checker = false;

            for (int j = w - 3; j <= w; j++)
            {
                // inn mai seah jitne bhi index

                if (j < 0 || j + 3 >= s.size())
                {
                    continue;
                }
                if (s[j] == '1' && s[j + 1] == '1' && s[j + 2] == '0' && s[j + 3] == '0')
                {
                    count = count - 1;
                }
            }

            s[w] = v + '0'; // change done

            for (int j = w - 3; j <= w; j++)
            {
                // inn mai seah jitne bhi index

                if (j < 0 || j + 3 >= s.size())
                {
                    continue;
                }
                if (s[j] == '1' && s[j + 1] == '1' && s[j + 2] == '0' && s[j + 3] == '0')
                {
                    count = count + 1;
                }
            }

            if (count > 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
}




// int firstIndex = 0;

// int secondIndex = 0;

// string newString = "";

// while (secondIndex < s.length())
// {
//     if (secondIndex <= 3)
//     {
//         newString = newString + s[secondIndex];
//     }
//     else
//     {
//         newString = newString + s[secondIndex];
//         newString.erase(0, 1);
//     }

//     // break if substring is equal to 1100

//     if (newString == "1100")
//     {
//         checker = true;
//         break;
//     }

//     secondIndex = secondIndex + 1  ;
// }
