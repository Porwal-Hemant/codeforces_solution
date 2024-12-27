// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// int32_t main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {

//         int n;
//         cin >> n;

//         string s;
//         cin >> s;

//         vector<int>numbers(n) ;

//         map<int , bool>numMap  ;

//         if( s[0] == 's' ||  s[n-1] == 'p' )
//         {
//             cout << "YES" << endl  ;
//             continue ;
//         }

//     }
// }

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
        cin >> n;
        string s;
        cin >> s;

        // 2D array for valid position
        set<int> elements;

        if (s[0] == 's')
        {
            s[0] = '.';
        }

        if (s[n - 1] == 'p')
        {
            s[n - 1] = '.';
        }

        // Disable values based on rules
        for (int i = 0; i < n; i++)
        {

            if (s[i] != '.')
            {

                elements.insert(s[i]);

            }

        }

        if (elements.size() <= 1)
        {

            cout << "YES" << endl  ; 

        }
        else 
        {

            cout << "NO" << endl  ;       

        }
    }
}




/*

        int firstIndex = -1;
        int secondIndex = -1;

        int dotCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'p')
            {

                firstIndex = 1;
                secondIndex = i + 1;
            }
            else if (s[i] == 's')
            {
                firstIndex = i + 1;
                secondIndex = n;
            }
            else if (s[i] == '.')
            {
                dotCount++;
            }
        }

        if( dotCount == s.length() )
        {
            cout << "YES" << endl  ;
        }
        else if( firstIndex ==  )
        {

        }

*/