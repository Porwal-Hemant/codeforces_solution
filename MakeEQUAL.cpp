#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        
        int n ;  
        cin >> n   ;   //  the size of the array 

        vector<int>numbers(n) ; 

        for( int i = 0 ;  i < n ;  i++ ) 
        {
            cin >> numbers[i] ;     // Array elements 
        }

        if( n == 1 ) 
        {
            cout << 0 << endl  ;  
            continue ;  
        }

        int firstIndex = -1 ;  
        int secondIndex =  -1  ;  

        int count1 = 1  ;  
        int count2 = 1 ;  

        int finalIndex  ; 

        for( int i = 1 ;  i < n ;  i++ ) 
        {
            if( numbers[i] == numbers[i-1] ) 
            {
                count1++ ;  
            }
            else 
            {
                firstIndex = i ;                 
                break ; 
            }
        }

        for( int i = n - 1 ;  i >= 1 ;  i-- ) 
        {
            if( numbers[i] == numbers[i-1] ) 
            {
                 count2++ ; 
            }
            else 
            {
                secondIndex = i - 1 ; 
                break ; 
            }
        }

        int ans ; 

        if( numbers[0] == numbers[n-1] ) 
        {
            ans = secondIndex - firstIndex + 1  ; 
        }
        else 
        {

            if( count1 >= count2 ) 
            {
                  secondIndex =  secondIndex + count2 ;
            } 

            else
            {
                  firstIndex = firstIndex - count1 ;  
            }

            ans = secondIndex - firstIndex + 1  ;  // dono index jab cross ho rahe honge usko consider kar liya hai maine 

        }

        if( count1 == n || count2 == n )    // iss case mai firstIndex secondIndex ko cross kar raha hoga 
        {    
            // jab sab same honge tabhe secondIndex firstIndex ko cross karega 
             cout << 0  << endl  ;   // all elements are same 
        }
        else 
        {
            cout << ans << endl  ; 
        }


    }

}

