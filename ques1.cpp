#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve1() 
{
    int n ,  k  ; 
    cin >> n >> k  ;   


    int number = n   ; 
    int steps =  0 ;  

    while( number >  0  ) 
    {
          if( number % 2 == 0 ) 
          {
             if( number >=  k ) 
             {
                   number = number -  ( k -  1  ) ;  
                   // even substract minus karna hai 
             }
             else 
             {
                 number = 0 ;  
             }
          }  

          else 
          {
             if( number >= k ) 
             {
                 number = number -  k  ; 
             }
             else 
             {
                number = 0 ;  
             }
          }

          steps++ ; 
    }

    cout << steps << endl ;  

}

void solve() 
{
    int n , k ;  
    cin >> n >> k ;  
    if( n % 2 == 0  && n <= ( k - 1 ) ) 
    {
        cout << 1 << endl ; 
        return   ;  
    }

    if( n % 2 != 0 && n <= k ) 
    {
        cout << 1 << endl ; 
        return  ;   
    }

    if( n % 2 == 0 ) 
    {
        // even hai 

        if( n % ( k - 1 ) == 0 ) 
        {
            int ans =  n  / ( k - 1 ) ;  
            cout << ans << endl  ;  
        }
        else 
        {
            int ans2  = n  / ( k - 1 ) + 1  ; 
            cout << ans2 << endl  ;  
        }

    }

    else 
    {
        // odd ke case mai 
        
         int ans = 1  ;   // n = n  - k  

         n = n - k  ;     // odd - odd even ho jayga yeaha 

         if( n % ( k - 1 ) == 0 ) 
         {
              ans =  n  / ( k - 1 ) + ans  ;  
             cout << ans << endl  ;  
         }
         else 
         {
          ans  = n  / ( k - 1 ) + 1   + ans  ; 
             cout << ans << endl  ;  
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
    for (int i = 1; i <= t; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

