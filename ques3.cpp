#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl


int nearestPowerOf2(int n) 
{
    if (n <= 0) return 0; // Handle invalid cases

    int power = 1;
    while (power * 2 <= n) {
        power *= 2;
    }
    return power ;
}

void solve() 
{
    int x ; 
    cin >> x ; 
    
    int y =  nearestPowerOf2( x ) - 1 ;  
    int thirdVertex = x ^ y  ;  
  
    int ans = -1 ;  

    if( ((thirdVertex + y) > x) && ( (y + x) > thirdVertex ) && (( thirdVertex + x ) > y )) 
    {
        ans = y ;   
    }

    cout << ans << endl  ; 
    
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

