#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long 
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl
#define all(x) begin(x), end(x)

bool isPerfectSquare( int num) 
{
    int sqrt_val =  sqrt(num);
    return (sqrt_val * sqrt_val == num);
}

void solve1() 
{

    int n ; 
    cin >> n  ;  

    bool swapper =  false   ;   // swapper true matlab tere ko ageh vala element lena hai 
    int sum = 0  ;  

    vector<int>ans ;  

    if( n == 1 ) 
    {
        cout << "-1" << endl  ; 
        return ; 
    }

    // ek test case miss huya hai yeaha konsa 

    int totalSum =  n * ( n + 1 ) / 2  ; 
//  int totalSum =  n * ( n + 1 ) / 2  ;   1LL seah multiply tab karte jab tumne #define int long long 
    if( isPerfectSquare( totalSum )  ) 
    {
        cout << "-1" << endl ;  
        return  ; 
    }

    for( int i = n ; i >= 1  ; i-- ) 
    {     

        if( swapper == true ) 
        {   
            ans.push_back( i + 1 ) ;  
            sum = sum + ( i + 1 ) ;  
            swapper = false  ; 
        } 
        else 
        {
            sum = sum + i  ;  
        

            if( isPerfectSquare(sum)  ) 
            {  
                int num =  i - 1  ;
                ans.push_back( num ) ;  
                sum = sum - i + ( i - 1 ) ;  
                swapper =  true  ;   
            } 
            else
            { 
                ans.push_back( i ) ; 
            }

        }

    }

    for( int i = 0 ;  i < n  ; i++ ) 
    {

        cout << ans[i] << " "   ; 

    }

    cout << endl ;  

}

void solve() 
{

    int n ; 
    cin >> n ;  

    if( n == 1 ) 
    {
        cout << "-1" << endl  ; 
        return ; 
    }

    // ek test case miss huya hai yeaha konsa 

    int totalSum = ( n * (n + 1)) / 2;


    if( isPerfectSquare( totalSum )  ) 
    {
        cout << "-1" << endl ;  
        return  ; 
    }

    vector< int>elements ;  
    
    for( int i = 1 ;  i <= n ; i++ ) 
    {
        elements.push_back( i )  ; 
    }

    int sum  = 0 ;  

    for( int i = 0 ; i < n  ; i++ ) 
    {
        sum = sum + elements[i] ; 
        
        if( isPerfectSquare(sum) ) 
        {
            sum = sum - elements[i] ; 
            if (i + 1 < n) {  // Prevent out-of-bounds error
                swap(elements[i], elements[i + 1]);
                sum += elements[i];
            }  
        }

    }
    for( int i = 0 ;  i < n  ; i++ ) 
    {

        cout << elements[i] << " "   ; 

    }

    cout << endl ;  

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


