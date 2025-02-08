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
        int k;

        cin >> n >> k;

        vector<int> numbers(n);

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        bool checker = false;
        int index = -1;
        for (int i = 0; i < n; i++)
        {
            bool canWin = true;
            for (int j = 0; j < n; j++)
            {
                if ((i != j) && ((abs(numbers[i] - numbers[j])) % k == 0))
                {
                    canWin = false;
                    break; // No need to check further for this i
                }
            }
            if (canWin)
            {
                checker = true;
                index = i + 1; 
                break;         
            }
        }

        if (!checker)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << index << endl;
        }
    }
}




// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// int32_t main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;

//         vector<int> numbers(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> numbers[i];
//         }

//         // Assume no valid solution exists initially
//         bool found = false;
//         int index = -1;

//         // Check for the solution
//         for (int i = 0; i < n; i++)
//         {
//             bool canWin = true;
//             for (int j = 0; j < n; j++)
//             {
//                 if (i != j && abs(numbers[i] - numbers[j]) % k == 0)
//                 {
//                     canWin = false;
//                     break; // No need to check further for this i
//                 }
//             }

//             if (canWin)
//             {
//                 found = true;
//                 index = i + 1; // 1-based indexing
//                 break;         // Exit the loop since we found the answer
//             }
//         }

//         if (!found)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
//             cout << index << endl;
//         }
//     }

//     return 0;
// }
