#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{

    int n , k  ; 
    cin >> n >> k  ; 

    string s  ;  
    cin >> s ; 

    string s_rev = s ;  
    reverse( s_rev.begin() , s_rev.end() )  ;  

    if( s < s_rev ) 
    {
        cout << "YES" << endl ; 
        return  ; 
    }
  // phele string ko deekh lo  
    set<char>st ; 

    for( int i = 0 ;  i < s.length() ;  i++ ) 
    {
        st.insert( s[i] ) ;  
    }
    
    bool checker = false  ; 

    if( st.size() > 1  ) 
    {
        checker = true  ; 
    }
    
    // sirf ek character hai 100% no chance 
    if( st.size() == 1 ) 
    {
        cout << "NO" << endl ; 
        return  ;         
    }
    
    // k == 0 and by nature bhi reversible nahi hai no chance 
    if( k  == 0  ) 
    {
        cout << "NO" << endl  ; 
        return ;  
    }

    if( k >= 1 ) 
    {
        if( checker ) 
        {
            cout << "YES" << endl ; 
            return  ; 
        }
        else 
        {
            cout << "NO" << endl ; 
            return  ; 
        }
    }


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


    // if( st.size() == 1 ) 
    // {
    //     // only one character directly return NO
    //     cout << "NO" << endl ; 
    //     return  ; 
    // }

    // int midIndex  = -1 ; 

    // if( s.size() % 2  == 0 ) 
    // {
    //     midIndex = ( s.size() / 2 ) - 1   ; 
    // }
    // else 
    // {
    //     midIndex = ( s.size() / 2 ) - 1   ; 
    // }
    
    // // midIndex par jab unequal honge tab ek aur condition aur lagane hai 
    // for( int i = 0 ; i <= midIndex ;  i++ ) 
    // {
    //     if( s[i] < s[n-i-1]  ) 
    //     {
    //         cout << "YES"  << endl  ; 
    //         return  ; 
    //     }
         
    //     else if( (s[i] > s[n-i-1] )   )  
    //     {   
    //         if( k > 0 ) 
    //         {
    //             cout << "YES" << endl ; 
    //             return ;
    //         }
    //         else 
    //         {
    //             cout << "NO" << endl ;  
    //             return  ; 
    //         }
  
    //     }
    //     else if(  (s[i] == s[n-i-1] )  )
    //     {
    //         if( st.size() > 1 && k > 0 ) 
    //         {
    //             cout << "YES" << endl ; 
    //             return ;                
    //         }
    //         else 
    //         {
    //             cout << "NO" << endl  ; 
    //             return  ; 
    //         }
    //     }
    // }

    // ek odd length vale string mai mid index bhi aayga  


/* 
    if( (s.length() % 2) != 0 ) 
    {
        // yeah case tab aaya hai jab pallindromic string hai 

        if( st.size() ==  1 ) 
        {
            cout << "NO" << endl ; 
            return  ; 
        }
        else 
        {   
            if( k > 0 ) 
            {
                cout << "YES" << endl  ; 
                return ; 
            }
            else 
            {
                cout << "NO" << endl ; 
                return  ; 
            }

        }
        
    }     

*/