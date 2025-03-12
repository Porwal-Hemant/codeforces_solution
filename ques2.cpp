#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

// void solve() 
// {
//     int n  , k ;
//     cin >>  n >>  k  ; 

//     vector<int>answer  ; 
    
//     if( n % 2 == 0 ) 
//     {
//         // 8 7 8 7 8 7 8 7 8 7  

//         for( int i =  0 ;  i < n ; i++ ) 
//         {
//             if( i % 2 == 0 ) 
//             {
//                 answer.push_back( n ) ;  
//             }
//             else
//             {
//                 answer.push_back( n - 1 ) ;  
//             }
//         }
        
//     }
//     else 
//     {
//         for( int i =  0 ;  i < n ; i++ ) 
//         {
//             if( i % 2 == 0 ) 
//             {
//                 answer.push_back( n - 1 ) ;  
//             }
//             else
//             {
//                 answer.push_back( n ) ;  
//             }
//         }        
//     }

//     for( int i = 0 ;  i < n  ;  i++ ) 
//     {
//         cout << answer[i] << " "  ;  
//     } 

//     cout << endl ;   

// }

void solve() 
{
    int n, k;
    cin >> n >> k;

    if (k % 2 == 0) 
    {
        // k is even
        for (int i = 0; i < n - 2; i++) 
        {
            cout << (n - 1) << " ";
        }
        cout << n << " " << (n - 1) << endl;
    } 
    else 
    {
        // k is odd
        for (int i = 0; i < n - 2; i++) 
        {
            cout << n << " ";
        }
        cout << n << " " << (n - 1) << endl;
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

