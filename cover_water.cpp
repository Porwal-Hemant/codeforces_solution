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

        int count = 0;

        bool checker = false; // aisa koe nahi mila hai abhi jo koe 2 index ke beech mai lie karta ho

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {

                if (s[i] == '.')
                {
                    count++;
                }
            }
            else if (i == n - 1)
            {

                if (s[i] == '.')
                {
                    count++;
                }
            }
            else if ((i != 0 && i != n - 1) && (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.'))
            {
                count++;
                checker =  true ;  
                break;
            }
            else if ((i != 0 && i != n - 1) && s[i] == '.' && ((s[i - 1] != '.') || (s[i + 1] != '.')))
            {
                count++;
            }
        }

       if( checker == true ) 
       {
           cout << 2 << endl  ;  
       }
       else 
       {
         cout <<  count << endl ;  
       }
    }
}

/*




*/