#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{
    int n  ; 
    cin >> n  ;  

    if( n == 1 ) 
    {
        cout << "1" << endl;
        return;
    }

    if( n == 2 ) 
    {
        cout << "1 2" << endl;
        return;
    }

    if( n == 3 ) 
    {
        cout << "1 3 2" << endl;
        return;
    }

    vector<int>ans( n ) ;  
   
    int midIndex = ( n - 1 ) / 2 ;

    if( n % 2 == 1 ) 
    {
        // one edge case for first index

        ans[1] = 4  ;  
        
    }

    int value  =  n  ; 

    ans[midIndex] = value ;  // placing n at the middle index 

    ans[0] = 1 ;  // placing 1 at the first index
    ans[n - 1] = 2 ;  // placing 2 at the last index
    ans[n-2] = 3 ;  // placing 3 at the second last index

    int leftIndex = midIndex - 1 ;
    int rightIndex = midIndex + 1 ;

    while( leftIndex > 0 && rightIndex < n - 2 && ( value > 3 ) ) 
    {   
        value-- ; 
        ans[rightIndex] = value ; 
        value-- ;  
        ans[leftIndex] = value ; 

        leftIndex-- ;
        rightIndex++ ;
        
    }


    for (int i = 0; i < n; i++) 
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return;

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

