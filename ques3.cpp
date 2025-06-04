#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{

    int n  ; 
    cin >> n  ;  

    vector<int>numbers( n ) ;  

    for ( int i = 0; i < n; i++ )
    {

        cin >> numbers[i];

    }

    int firstIndex = 0 ;  

    int secondIndex = 1 ;   

    int ans = LLONG_MAX  ; 

    while( firstIndex < n ) 
    {

        while( secondIndex < n && numbers[secondIndex] == numbers[firstIndex] )
        {

            secondIndex++;

        }
        // i -> firstIndex
        // j -> ( secondIndex - 1 )
        // left aur right pointer zero based indexing mai  

        int i =  firstIndex + 1;  

        int j = secondIndex ; 

        int sum  = (( n - j) + ( i - 1 ) ) *   ( numbers[firstIndex]) ; 

        ans = min( ans , sum ) ;

        firstIndex = secondIndex ;
        secondIndex = firstIndex + 1;

    }

    cout << ans << endl;

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

