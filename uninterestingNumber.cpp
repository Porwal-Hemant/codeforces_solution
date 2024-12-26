#include <bits/stdc++.h>
#include<algorithm>

#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;

        cin >> n;

        int twoCount = 0;

        int threeCount = 0;

        int sum = 0;

        int number = n;

        while (number > 0)
        {
            int digit = number % 10;

            sum = sum + digit;

            if (digit == 2 )
            {
                twoCount = twoCount + 1;
            }
            else if (digit == 3)
            {
                threeCount = threeCount + 1;
            }

            number = number / 10;
        }

        twoCount = min( twoCount , 8LL ) ; 
        threeCount = min( threeCount , 8LL ) ;  

        bool checker = false;
        for (int i = 0; i <= twoCount; i++)
        {
            for (int j = 0; j <= threeCount; j++)
            {
                if ((sum + 2 * i + 6 * j) % 9 == 0)
                {
                    checker = true;
                    break;
                }
            }

            if (checker == true)
            {
                break;
            }
        }

        if (checker == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}



/*

        if (sum % 9 == 0)
        {
            cout << "Yes" << endl;
        }

        else if ( (twoCount == 0 )&& (threeCount == 0 )&& (sum % 9 != 0 ))
        {
            cout << "No" << endl;
        }
        else if (twoCount == 0 && threeCount != 0)
        {
            bool checker = false;
            for (int i = 1; i <= threeCount; i++)
            {
                if ((sum + 3 * i) % 9 == 0)
                {
                    checker = true;
                    break;
                }
            }

            if (checker == true)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else if (twoCount != 0 && threeCount == 0)
        {
            bool checker = false;
            for (int i = 1; i <= twoCount; i++)
            {
                if ((sum + 2 * i) % 9 == 0)
                {
                    checker = true;
                    break;
                }
            }

            if (checker == true)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else if (twoCount != 0 && threeCount != 0)
        {

*/

/*

        int factorNeeded  = ( 9 - (( sum ) % 9) ) ;  // isko add kiya toh divisible by 9 ho jayga

        if( factorNeeded % 2 == 0 && (factorNeeded / 2 ) <= twoCount )
        {
            cout << "Yes" << endl  ;
        }
        else if( factorNeeded % 3 == 0 && (factorNeeded / 3 ) <= threeCount )
        {
            cout << "Yes" << endl ;
        }
        else
        {
            cout << "No" << endl  ;
        }

*/