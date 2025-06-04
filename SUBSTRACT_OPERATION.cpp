#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long 
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{

    int n , k  ;  

    cin >> n >> k;  

    vector<int>numbers( n ) ;  

    map<int , int>freqMap  ; 

    for( int i = 0 ; i < n ; i++ )
    {

        cin >> numbers[i] ;
        freqMap[numbers[i]]++ ;

    } 
    
    for( int i = 0 ; i < n  ; i++  ) 
    {
        int numReq = ( numbers[i] - k ) ;
        
        if( freqMap[numReq] > 0 )
        {

            cout << "YES" << endl;
            return;

        }
    }
    
    cout << "NO" << endl;
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



