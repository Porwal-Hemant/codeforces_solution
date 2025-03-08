#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long 
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl
void solve() 
{
    int n, q; 
    cin >> n >> q;  

    vector<int> numbers(n);  
    vector<int> freqSum(n, 0); // Using vector instead of map for prefix sum

    int sum = 0;  

    for (int i = 0; i < n; i++)  
    {  
        cin >> numbers[i];
        sum += numbers[i];  
        freqSum[i] = sum;  // Store prefix sum
    }

    // int sum_original = accumulate(numbers.begin(), numbers.end(), 0LL);  
    int sum_original =  freqSum[n-1] ;  

    for (int i = 0; i < q; i++) 
    {
        int l, r, k;
        cin >> l >> r >> k;  

        int sum = 0;  

        if (l == 1) 
        {
            sum = sum_original + (k * (r - l + 1)) - freqSum[r - 1];  
        }
        else 
        {
            sum = sum_original + (k * (r - l + 1)) - freqSum[r - 1] + freqSum[l - 2];                  
        }

        cout << (sum % 2 ? "YES" : "NO") << endl;
    }
}

// void solve() 
// {
//     int n  ; 
//     int q   ; 

//     cin >> n ; 
//     cin >> q ;  
     
//     vector<int>numbers  ;  

//     map<int , int>freqSum  ; 
//     int sum = 0 ;  

//     for( int i = 0 ;  i < n ; i++  )
//     {  
        
//         int x  ; 
//         cin >> x  ;  

//         numbers.push_back( x ) ; 
//         sum = sum + numbers[i] ;  

//         freqSum[i] = sum  ;  

//     }

//     int sum_original  = accumulate(numbers.begin() , numbers.end() , 0LL )  ; 

//     for( int i = 0 ;  i < q ;  i++ ) 
//     {
//         // l  r  k 

//         int l , r ,  k ;
//         cin >> l >> r >>  k ;  
        
//         int sum  = 0 ;  

//         for( int ii = l  ; ii <= r ;  ii++ ) 
//         {   
//             if( l == 1 ) 
//             {
//                 sum = sum_original +  (  k * ( l - r + 1 ) )  - ( freqSum[r-1] ) ;  
//             }
//             else 
//             {
//                 sum = sum_original +  (  k * ( l - r + 1 ) )  - ( freqSum[r-1] ) + ( freqSum[l-2] ) ;                  
//             }

//         }

//         if( sum % 2 != 0 ) 
//         {
//             cout << "YES" << endl  ;  
//         }
//         else 
//         {
//             cout << "NO" << endl  ;  
//         }


//     }
// }

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

