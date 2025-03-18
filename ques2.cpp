#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long 
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);


    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    } 
 


    // k  >=2 ke liye koe dikkat nahi ho sakte -> 3 element choose karne honge 
    // k == 1 ke liye dikkat hai 

    if( k == 1 ) 
    {
        int ans =  a[0] + a[n-1] ;  
        for( int i = 1 ;  i < n -  1  ; i++ ) 
        {
            ans = max( ans  ,  a[i] + max( a[0] , a[n-1] )  )  ;  
        }  
        cout << ans << endl  ; 
        return  ; 
    }

    sort(a.rbegin(), a.rend());

    ll sum = 0;

    // Sum of the first k chosen elements
    for (int i = 0; i < k; i++)
        sum += a[i];

    ll last_painted = a[k];

    cout << sum + last_painted << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("D:/CodeForces/input", "r", stdin);
    freopen("D:/CodeForces/output", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
