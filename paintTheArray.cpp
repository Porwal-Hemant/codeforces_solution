#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{
    // code here //

    int n ; 
    cin >>  n   ;  

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) 
    {

        cin >> numbers[i]  ;

    }

    int gcd1 = numbers[0];

    int gcd2 = numbers[1]; 

    for (int i = 2; i < n; i=i+2) 
    {

        gcd1 = __gcd(gcd1, numbers[i]);

    }

    for (int i = 3; i < n; i=i+2) 
    {

        gcd2 = __gcd(gcd2, numbers[i]);

    }

    // gcd2 should not divide elements of first loop  
    bool checker1 = false  ;  

    bool checker2 = false  ;
    for( int i = 0; i < n; i = i + 2 )
    {
       
        if( numbers[i] % gcd2 == 0 )
        {

            checker1 = true  ;  
            break; 

        }

    }

    if( checker1 == false ) 
    {
        cout << gcd2 << endl; 
        return ; 
    }

    for( int i = 1; i < n; i = i + 2 )
    {

        if( numbers[i] % gcd1 == 0 )
        {

            checker2 = true  ;  
            break; 

        }

    }

    if( checker2 == false ) 
    {
        cout << gcd1 << endl; 
        return ; 
    }

    cout << 0 << endl;

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

