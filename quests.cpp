#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve()
{

    int n, k;

    cin >> n >> k;

    vector<int> a(n);

    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];

    }

    for (int i = 0; i < n; i++)
    {

        cin >> b[i];

    }
    
    vector<int> c(n) ;

    int maxi  =  b[0]  ;  

    c[0] = b[0]  ;  

    for( int i = 1 ; i < n  ; i++ ) 
    {

        maxi = max( maxi , b[i] ) ;  

        c[i] = maxi  ;  

    }

    int maxAns = 0 ;  

    int sum = 0 ;  

    for( int i = 0 ;  i < min( n , k ) ; i++ ) 
    {

        sum  =  sum +  a[i] ;  

    }

    int ans = sum + c[n-1] * ( k - min( n , k )  )  ;  

    // add isliye kiya hai suppose size 5 hain array ka and 

    maxAns =  max( maxAns , ans ) ;  

    // cout << "maxAns after first iteration is " << maxAns << endl ;

    sum = sum - a[min(n, k) - 1]; // remove the last element added in the sum

    // cout << "sum after removing last element is " << sum << endl ;


    for( int i = min( n , k ) - 2 ;  i >= 0 ; i-- ) 
    {
        // ( i + 1 ) mere ko batayga ke itne elements tum le chuke ho yaka tak 
        
        int elemTaken = i + 1  ;   // ( i == 0 ) tells you one element taken 
        // cout << "i is " << i << endl ;
          
        // cout << "elemTaken is " << elemTaken << endl ;

        int req = k - ( i + 1 ) ;   // ( 4 - 1 ) = 3 elements have to be taken 
        // cout << "req is " << req << endl ;

        int possibleAns =  req * c[i]+ sum  ;  
        // cout << "possibleAns is " << possibleAns << endl ;

        maxAns =  max( maxAns , possibleAns ) ;
        // cout << "maxAns after this iteration is " << maxAns << endl ;
        
        sum = sum - a[i]; // remove the current element from the sum
    }
    
    cout << maxAns << endl; 

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
    for (int i = 1; i <= t; ++i)
    {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}


