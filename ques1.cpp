#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{
    int n , x  ;  
    cin >> n >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    int firstIndex  = 0 ;  

    bool checker = true  ;  // power can be used  

    while( firstIndex < n ) 
    {
         if( a[firstIndex] == 1  ) 
         {
             if( checker  == false ) 
             {
                cout << "NO" << endl;
                return;
             }
             else{
                firstIndex = firstIndex + x   ;  
                checker = false ; // power can be used only once

             }
         }
         else 
         {
            firstIndex++  ;  
         }
    } 
    
    cout << "YES" << endl;
    return;

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

