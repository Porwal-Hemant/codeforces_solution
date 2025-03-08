#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long 
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{  

    int n ;     // length of the array a
    cin >> n ;   

    vector<int>numbers ;  

    int oneCount = 0 ; 
    int zeroCount = 0 ;  

    for( int i = 0 ; i < n ;  i++ ) 
    {

        int x ;   
        cin >> x  ; 

        numbers.push_back( x )  ;  

        if( x == 0 ) 
        {
            zeroCount++ ;  
        }

        if( x == 1 ) 
        {
            oneCount++ ;
        }

    }

    if( oneCount == 0 ) 
    {
        cout << "0"<< endl  ; 
        return  ; 
    }

    // if( oneCount == 1  && zeroCount == 0 )
    // {

    //     if( n == 1 ) 
    //     {
    //         // cout << 1<< endl ;
    //         cout << 0  << endl  ;  
    //         return  ;  

    //     }
    //     else 
    //     {
    //         cout << 1 << endl ;  
    //         return  ;  
    //     }

    // }

    if( zeroCount == 0 && oneCount >= 1) 
    {
        cout << oneCount << endl ; 
        return ;  
    }

    int ans = pow(2,zeroCount) * ( oneCount ) ;  

    cout << ans << endl ;  

}

int32_t main() 
{
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

