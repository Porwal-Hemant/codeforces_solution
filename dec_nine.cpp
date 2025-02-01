#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{

    int n;

    int k;

    cin >> n >> k;

    int number = n;

    while (k > 0)
    {

        if (number % 10 == 0)
        {
            number = number / 10;
        }
        else
        {
            number = number - 1;
        }

        k--;
    }

    cout << number << endl  ;  
}

