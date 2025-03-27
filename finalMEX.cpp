#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{
     int n ;  
     cin >> n  ; 

     vector<int>numbers(n) ;  

     int count  = 0 ;  

     for( int i = 0 ;  i < n  ; i++ ) 
     {
        int x  ; 
        cin >> x  ; 

        if( x == 0 ) 
        {
             count++ ; 
        }

        numbers[i] = x  ; 
     }

     int zerosLast = 0;
     int i = n - 1;
     
     // Traverse from the last index until a non-zero element is found
     while (i >= 0 && numbers[i] == 0) {
         zerosLast++;
         i--;
     }

    if( numbers[n-1] == 0 ) 
    {
         // 2 cases hai kya toh bunch of zeroes honge kya toh sirf ek zero hoga  
         if( count == n ) 
         {   
             cout << 3 << endl ;  
             cout << 1 << " " << n - 2 << endl ; 
             cout << 2 << " " << 3 << endl ; 
             cout << 1 << " "<< 2 << endl ; 
             return ; 
         }

         if(  zerosLast > 1  ) 
         {
             int netSize = n - zerosLast  + 1  ;  
            //  cout << "this case holding true " << endl ;  
            //  cout << netSize  << endl  ;
             count = count -  zerosLast ;  
            //  cout << ( netSize  ) << " " << n << endl ;             
             if( count >  0  ) 
             {
                 // I know ke last element toh zero nahi hai 
                 
                 cout << 3 << endl  ;  
                 cout << ( netSize  ) << " " << n << endl ; 
                 cout << 1 << " " << netSize - 1  << endl ; 
                 cout << 1 << " " << 2 << endl ; 
                 return ; 
                

             }
             else if( count == 0 )
             {
                 // no zero element 
                 cout << 2 << endl ;  
                 cout << ( netSize  ) << " " << n << endl ; 
                 cout << 1 << " " << netSize  << endl ;  
                 return  ;  
             }
         }
         else if( zerosLast == 1)
         {
              count = count -  1 ; 
 
              
              if( count > 0 ) 
              {   
                cout << 3 << endl  ; 
                cout << n - 1 << " " << n << endl  ;
                cout << 1 << " " << n - 2 << endl ; 
                cout << 1 << " " << 2 << endl  ;  
                return  ;  
              }
              else 
              {  
                cout << 2 << endl  ; 
                cout << n - 1 << " " << n << endl  ;
                cout << 1 << " " << n - 1  << endl ;  
                return  ;  
              }
         }

    }
    else 
    {
        if( count == 0 ) 
        {   
            cout << 1 << endl ;  
            cout << 1 << " " << n  << endl  ;  
            return  ;   
        }
        else 
        {   
            cout << 2 << endl ; 
            cout << 1 << " " << n - 1  << endl  ; 
            cout << 1 << " " << 2 << endl  ; 
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

