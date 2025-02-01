// #include <bits/stdc++.h>
// #define int long long
// #include <algorithm>
// #include <numeric> // Required for std::accumulate
// using namespace std;

// int32_t main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {

//         int n; // length of array a
//         int k; // number of operations

//         cin >> n >> k;

//         vector<int> numbers(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> numbers[i];
//         }

//         // 4 -2 8 -12 9

//         int firstIndex = 0;

//         int secondIndex = 0;

//         int maxSum = 0;

//         int sum = accumulate(numbers.begin(), numbers.end(), 0LL );

//         int currentSum = 0;

//         while (secondIndex <= (n - 1))
//         {

//             currentSum = currentSum + numbers[secondIndex];

//             if (currentSum > 0)
//             {
//                 maxSum = max(maxSum, currentSum);
//             }
//             else if (currentSum <= 0)
//             {
//                 currentSum = 0;
//             }

//             secondIndex++;
//         }

//         int MOD = 1e9 + 7;

//         int addKarnaHai = ((maxSum % MOD ) * ((k) % MOD )) % MOD ;

//         int newSum = sum + addKarnaHai;

//         int finalAns;

//         if ((newSum % MOD) >= 0)
//         {
//             finalAns = newSum % MOD;
//         }
//         else
//         {
//             finalAns = MOD + (newSum % MOD);
//         }

//         cout << "ANS -> " << finalAns << endl;
//     }
// }

// #include <bits/stdc++.h>
// #define int long long
// #include <algorithm>
// #include <numeric> // Required for std::accumulate
// using namespace std;

// int32_t main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n; // length of array a
//         int k; // number of operations

//         cin >> n >> k;

//         vector<int> numbers(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> numbers[i];
//         }

//         int firstIndex = 0;
//         int secondIndex = 0;
//         int maxSum = 0;
//         int sum = accumulate(numbers.begin(), numbers.end(), 0LL);
//         int currentSum = 0;

//         while (secondIndex <= (n - 1))
//         {
//             currentSum = currentSum + numbers[secondIndex];

//             if (currentSum > 0)
//             {
//                 maxSum = max(maxSum, currentSum);
//             }
//             else if (currentSum <= 0)
//             {
//                 currentSum = 0;
//             }

//             secondIndex++;
//         }

//         int MOD = 1e9 + 7;

//         // Ensure correct modular arithmetic
//         int addKarnaHai = ((maxSum % MOD) * (k % MOD)) % MOD;   // idhar galte ke hai maine

//         // Ensure sum is properly handled with mod
//         int newSum = ((sum % MOD) + addKarnaHai) % MOD;

//         // Final adjustment to handle negative results
//         int finalAns = (newSum + MOD) % MOD;

//         cout << "ANS -> " << finalAns << endl;
//     }
// }

#include <bits/stdc++.h>
#define int long long
#include <algorithm>
#include <numeric> // Required for std::accumulate
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n; // length of array a
        int k; // number of operations

        cin >> n >> k;

        vector<int> numbers(n);

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        int firstIndex = 0;
        int secondIndex = 0;
        int maxSum = 0;
        int sum = accumulate(numbers.begin(), numbers.end(), 0LL);
        int currentSum = 0;

        while (secondIndex <= (n - 1))
        {
            currentSum = currentSum + numbers[secondIndex];

            if (currentSum > 0)
            {
                maxSum = max(maxSum, currentSum);
            }
            else if (currentSum <= 0)
            {
                currentSum = 0;
            }

            secondIndex++;
        }

        int MOD = 1e9 + 7;

        if (maxSum <= 0)
        {
            std::cout << (sum % MOD + MOD) % MOD << endl;
            continue  ; 
        }
        // New logic for modular addition and multiplication
        while (k != 0)
        {
            sum += maxSum;
            maxSum += maxSum;
            sum = (sum % MOD + MOD) % MOD;    // odd and even both ko consider karne ke liye 
            maxSum = (maxSum % MOD + MOD) % MOD;  // maxsum har baar increase hota rahega 
            k--;
        }

        int finalAns = (sum % MOD + MOD) % MOD;

        cout << finalAns << endl;
    }
}
