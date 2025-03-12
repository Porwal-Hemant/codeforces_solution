#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{
    int n , x ;  

    cin >> n >> x ;  

    vector<int>numbers  ;  

    int sum  = 0 ;  

    for( int i = 0 ;  i < n  ; i++ ) 
    {
        int x  ; 
        cin >> x ;   

        numbers.push_back( x ) ;  
        sum = sum + x ;   
    }

    if (sum % n == 0 && (sum / n) == x) 
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl ; 
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

