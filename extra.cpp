
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int rem =  1e9 + 7  ;  

        int num = -11 ; 

        int ans =  num % rem  ;  

        if( ans < 0 ) 
        {
            ans = rem + ans  ; 
        }

        cout << ans << endl  ;  

    }

}

