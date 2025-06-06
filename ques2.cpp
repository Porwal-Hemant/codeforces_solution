#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{
    int xo , n  ;  

    cin >> xo >> n; 

    // haar 4 positions ke baad back to xo position aana hain 

    int first  ;   

    int second  ;  

    int third   ;  


    if( xo % 2  == 0  ) 
    {

        first = xo - 1  ;  
        second = xo + 1 ;

        third = second + 3  ;  

    }

    else 
    {
        first = xo + 1 ;  
        second = xo - 1 ;  

        third = second - 3 ;  
    } 

    if( n % 4 == 0 ) 
    {

        cout << xo << endl  ;
        return  ;  

    }

    if( n % 4 == 2 ) 
    {

        cout << second << endl  ; 
        return  ;   

    }

    if( n % 4 == 1 ) 
    {

        if(  xo % 2 == 0 ) 
        {   

            int factor = n / 4 ;
            cout << first - factor * 4 << endl ;  
            return ;  

        }
        else 
        {   

            int factor = n / 4 ;
            cout << first + factor * 4 << endl ;  
            return ;  

        }

    }

    if( n % 4 == 3 ) 
    {

        if( xo % 2 == 0 ) 
        {   

            int factor = n / 4 ;
            cout << third + factor * 4 << endl ;  
            return ;  

        }
        else 
        {   

            int factor = n / 4 ;
            cout << third - factor * 4 << endl ;  
            return ;  

        }

    }
    

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("D:/CodeForces/input", "r", stdin);
    freopen("D:/CodeForces/output", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) 
    {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;

}


