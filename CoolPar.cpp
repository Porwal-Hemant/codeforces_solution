#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{

    int n; 
    cin >> n; 

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> lastIndex(n, -1);  // output array
    unordered_map<int, int> seen;  // to store last seen index

    for (int i = n - 1; i >= 0; i--) 
    {
        if (seen.find(a[i]) == seen.end()) 
        {
            // First time from back
            lastIndex[i] = i;
        } 
        else 
        {
            lastIndex[i] = seen[a[i]];  // where it was last seen
        }

        // Update the last seen position
        seen[a[i]] = i;
    }

    // Output the tracker array
    for (int i = 0; i < n; i++) 
    {

        cout << lastIndex[i] << " "  ;

    }


    int partition = 1  ;  

    if( n == 1  )    
    {

        cout << "1" << endl;
        return;

    }

    if( n == 2 ) 
    {

        if( a[0] != a[1] ) 
        {

            cout << "1" << endl;
            return;

        }
        else 
        {

            cout << "2" << endl;
            return;

        }

    }

    int startIndex = 1  ;  

    int endIndex = lastIndex[0] - 1  ; 

    // while( endIndex < n - 1 )  
    // {
    //     for( int i = startIndex ;  i <= endIndex ; i++ ) 
    //     {
    //         if( lastIndex[i] == i ) 
    //         {
    //             partition++  ;  
    //         }
    //     }
    // }

    // count the number of partitons such that the previous partion contains all the elements coming in prev partions if prev partion is having 1 1 2 than the next partition can have [ 1 2 ] 
 

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

