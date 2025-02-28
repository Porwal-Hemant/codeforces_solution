// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define endl '\n'
// #define debug(x) cout << #x << " = " << x << endl

// void solve() 
// {

//     int n ; 

//     cin >> n   ;  

//     int count = 1 ;    // zero ko hamesha include karenge 

//     int fullCycles = n / 15  ;  

//     int rem  =  n % 15  ; 

//     count = count + ( 3 * fullCycles ) ; 

//     int startN  =  ( n  / 15 ) * 15  + 1  ; 

//     for( int i = startN ;  i <= n ;  i++ ) 
//     {
//         if( i % 3 == i % 5 ) 
//         {
//             count++ ; 
//         }
//     }

//     cout << count << endl  ; 

// }

// int32_t main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("D:/CodeForces/input", "r", stdin);
//     freopen("D:/CodeForces/output", "w", stdout);
// #endif

//     int t = 1;
//     cin >> t;
//     for (int i = 1; i <= t; ++i) {
//         // cout << "Case #" << i << ": ";
//         solve();
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {  
    int n, x, k;  // Using int unless necessary
    cin >> n >> x >> k;

    string s;  
    cin >> s;  

    int startPoint = x;  
    int count = 0;  // Tracks seconds
    int ans = 0;  
    size_t indexS = 0;  // Best practice for string index

    while (indexS < s.length() && count < k) {
        if (s[indexS] == 'L')  
            startPoint--;  
        else if (s[indexS] == 'R')  
            startPoint++;  

        if (startPoint == 0) {  
            ans++;  
            indexS = 0;  // Restart from the beginning
        } else {  
            indexS++;  
        }

        count++;  
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

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
