#include <bits/stdc++.h>
#define int long long
using namespace std;

// // Function to calculate factorial of n
// long long factorial(long long n) {
//     long long result = 1;
//     for (long long i = 2; i <= n; i++) {
//         result *= i;
//         if (result > 1e18) {
//             // To handle cases where factorial grows beyond reasonable limits
//             break;
//         }
//     }
//     return result;
// }

int32_t main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;

        cout << 1 << " "; // always

        if (d % 3 == 0 || n >= 3)
        {
            cout << 3 << " ";
        }
        if (d % 5 == 0)
        {
            cout << 5 << " ";
        }
        if( (d % 7 == 0) ||  n >= 3 )    //  3! is equal to 6   six times 1 is divisible by 7 
        {
            cout << 7 << " ";            
        }
        
        // n  = 3  n ! will lead to 6 ( d % 3 == 0 ) means d = 3 or 9 
        // similarly for n = 4 it will be 4! which is 24 
        if( d % 9 == 0 || n >= 6 ||  ( d % 3 == 0 && n >= 3 ) ) 
        {
            cout << 9 << " "  ; 
        }
        
        cout << endl ; 

    }

    return 0;
}





/*

        long long n;
        int d;
        cin >> n >> d;

        vector<int> ans; // Vector to store results

        ans.push_back(1); // 1 divides every number

        // Calculate factorial of n
        long long fact = factorial(n);

        // Calculate sum by multiplying factorial with d
        long long sum = fact * d;

        // Check divisibility for 3
        if (sum % 3 == 0) {
            ans.push_back(3);
        }

        // Check divisibility for 5
        if (d % 5 == 0 ) {
            ans.push_back(5);
        }

        // Check divisibility for 7
        long long temp = sum;
        while (temp >= 7) {
            long long lastDigit = temp % 10;
            temp /= 10;
            temp -= (2 * lastDigit);
        }
        if (temp == 0 || temp % 7 == 0) {
            ans.push_back(7);
        }

        // Check divisibility for 9
        if (sum % 9 == 0) {
            ans.push_back(9);
        }

        // Output the result
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << (i + 1 < ans.size() ? " " : "");
        }
        cout << endl;

*/