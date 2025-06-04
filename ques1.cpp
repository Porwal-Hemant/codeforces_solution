#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl


void solve() 
{
    int x  ;  
    cin >> x   ;  

    int counts = 0 ; 

    int number = 0 ;  

    while( number < x ) 
    {

        counts = counts + 2  ;  

        number = number * 2 + 1  ;  

    }

    counts  = counts  + 1  ;  

    cout << counts << endl ;

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

