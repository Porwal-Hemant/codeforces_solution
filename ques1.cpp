#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

int calc( int n , int k ) 
{

    if( n == 1 ) 
    {
        return 0 ; 
    }

    if( n <= k ) 
    {
        return 1  ; 
    }

    return 1  + calc( n - ( k - 1 ) ,  k ) ; 

}

void solve() 
{

    int n , k ; 

    cin >> n >> k  ;

    int f = k - 1  ;

    // if( n == 1 )   
    // {

    //     cout <<  0  << endl ; 

    // } 

    // if( n <= k   ) 
    // {

    //     cout << 1 << endl ;  

    // }

    // cout << calc( n , f ) << endl ; 
    cout << calc( n , k ) << endl  ;  
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

