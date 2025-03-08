#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

bool solve() 
{
    int a ; 
    cin >> a  ; 
    int b ; 
    cin >> b ; 
    int c ; 
    cin >> c ; 


    // a b c 


    if( (c - b  ) == ( b - a )  ) 
    {
        return true  ;  
    }

    int thirdFirst  = ( c - a )  ; 

    if( thirdFirst % 2 == 0 ) 
    {
        int d = thirdFirst / 2  ; 

        int middleShould = d + ( a ) ;  

        if(  (middleShould % b == 0  ) && middleShould >  0  )
        {
            return true  ; 
        }
    }

    int firstSec = ( b - a ) ;  

    int reqC = firstSec + b   ;  

    if( reqC % c == 0  && reqC > 0 )
    {
        return true  ; 
    }
     
    int secThird = ( c -  b )  ; 

    int reqA = b - secThird  ;  

    if( reqA >  0  && reqA % a == 0 ) 
 
    {
        return true  ; 
    }
    
   
    return false  ;  
    
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
    for (int i = 1; i <= t; ++i) 
    {
        // cout << "Case #" << i << ": ";
        bool ans  =   solve(); 

        if( ans ==  true ) 

        {
           cout << "YES"   << endl ;  
        }

        else 
        {
            cout << "NO" << endl  ;  
        }
    }

    return 0;
}



