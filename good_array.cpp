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
        cin >> n; // length of the array a

        vector<int> numbers(n);

        int mini = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
            mini = min(mini, numbers[i]);
        }

        cout << numbers.size() << endl;

        for( int i = 0 ;  i < n ;  i++ ) 
        {
            int number = numbers[i] ; 

            int power = 1  ; 

            while( power < number ) 
            {
                power = power * 2  ;   
            }

            cout << i + 1  << " " << ( power - number ) << endl  ;  
        }

    }
}

// you have think all its justification yourself 

/* 

        for (int i = 0; i < numbers.size(); i++)
        {
            int ans = (mini - (numbers[i] % mini));

            if (ans == mini)
            {
                ans = 0; // already divisible hai dost
            }

            cout << (i + 1) << " " << ans;
            cout << endl;
        }

*/