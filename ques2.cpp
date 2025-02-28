#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl
// #define int long long 

void solve() 
{  

    long long int n , x  , k ; 
    cin >> n >> x >> k;

    string s  ;  

    cin >> s  ;  

    long long int startPoint = x ;  

    long long int count  = 0 ;   // count is keeping track of the seconds  

    long long int ans  =  0 ;  

    int indexS = 0; 

    // LRRLL
    while( indexS < s.length() && count < k   ) 
    {
         if( s[indexS] == 'L' )  
         {
            startPoint = startPoint - 1  ;
         }

         else if( s[indexS] == 'R' ) 
         {
            startPoint = startPoint + 1   ; 
         }

         if( startPoint == 0 ) 
         {
            ans++ ;  
            indexS = 0 ;  
         }
         else 
         {
            indexS++ ;  
         }

         count++  ;    // count toh hamesha hee ageh barega 
    }

    cout << ans << endl ;  

}

// void solve2() 
// { 

//     long long int n , x  , k ; 
//     cin >> n >> x >> k;

//     string s  ;  

//     cin >> s  ;  

//     long long int startPoint = x ;  

//     long long int count  = 0 ;   // count is keeping track of the seconds  

//     int indexS = 0;      

//     bool checker =  false  ;   // jab phele par zero ho jayga tab mai isko false kar dunga 
    
//     while( indexS < s.length() && count < k   ) 
//     {
//          if( s[indexS] == 'L' )  
//          {
//             startPoint = startPoint - 1  ;
//          }

//          else if( s[indexS] == 'R' ) 
//          {
//             startPoint = startPoint + 1   ; 
//          }

//          if( startPoint == 0 ) 
//          { 
//             indexS = 0 ;  
//             checker =  true  ;   
//             break ; 
//          }
//          else 
//          {
//             indexS++ ;  
//          }

//          count++  ;    // count toh barao jab tak phele bar zero nahi ho jaata 
//     }    

//     // checker = false iska matlab voh zero huya hee nahi hai 

//     if( checker == false  ) 
//     {
//         cout <<  0  << endl ; 
//         return  ; 
//     }

//     int netk =  k - count   ; 

//     // let us find the net steps from here 

//     long long int left  = 0   ; 
//     long long int right = 0   ;
//     long long int factor  = 0  ;  

//     for( int i = 0 ;  i < n  ;  i++ ) 
//     {
//         if( s[i] == 'L') 
//         {
//             left =  left + 1  ; 
//         }
//         else
//         {
//             right  = right + 1 ; 
//         }

//         if( left == right ) 
//         {
//             factor = i + 1  ; 
//         }
//     }

//     long long int ans = 1  ; // ek bar toh ho chuka hai 

//     ans += (netk / factor);
   
//     cout << ans << endl ;  

// }

void solve2() 
{ 
    long long n, x, k; 
    cin >> n >> x >> k;

    string s;  
    cin >> s;  

    long long startPoint = x;  
    long long count = 0;   
    long long ans = 0;  

    int indexS = 0;      
    bool checker = false; // Tracks if the robot has reached 0 at least once

    // First, simulate the movement up to k seconds
    while (indexS < s.length() && count < k) 
    {
        if (s[indexS] == 'L')  
            startPoint--;
        else if (s[indexS] == 'R') 
            startPoint++;

        count++ ;  // ek step ptoh bara na uppar vala     
        if (startPoint == 0) 
        {
            ans++;  
            indexS = 0;  
            checker = true;   
            break; 
        }
        else 
        {
            indexS++;  
        } 
    } 
   
    // cout << "ANS AFTER FIRST FIND ->" << ans << endl   ;  

    // If zero is never reached, return 0
    if (!checker) 
    {
        cout << 0 << endl; 
        return;  
    }

    long long netk = k - count; // Remaining time after reaching 0 once
    // cout << "NetK ->" << netk << endl ; 

    // Calculate cycle length
    long long left = 0, right = 0, factor = 0;  

    for (int i = 0; i < n; i++) 
    { 

        if (s[i] == 'L') 
            left++; 
        else
            right++;

        if (left == right) 
        {
            factor = i + 1; 
            break ; 
        }

    }
    // cout << "factor->" << endl ; 
    // If a full cycle exists, add the number of full cycles within netk
    if (factor > 0) 
    {
        ans += ( netk / factor) ;  
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
    for (int i = 1; i <= t; ++i) 
    {
        // cout << "Case #" << i << ": ";
        solve2();
    }

    return 0;
}



