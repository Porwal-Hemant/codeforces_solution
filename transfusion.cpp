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
        cin >> n ;  

        int oddIndexSum = 0 ; 

        int oddElements = 0 ; 

        int evenIndexSum = 0 ;  

        int evenElements = 0 ;  

        int sum = 0 ;  

        for( int i = 0 ; i < n ;  i++ ) 
        {   
            
            int x ;  
            cin >> x ;  

            sum = sum + x ;  
            
            if( i % 2 != 0 ) 
            {
                oddIndexSum = oddIndexSum +  x  ;  
                oddElements = oddElements + 1  ; 
            }
            else 
            {
                evenIndexSum = evenIndexSum + x  ;  
                evenElements = evenElements + 1  ;  
            }
        }

        if(  (sum % n == 0 ) && (oddIndexSum % oddElements == 0) && (( oddIndexSum / oddElements ) == (evenIndexSum / evenElements )) && ( evenIndexSum % evenElements == 0 )  )  
        {
            cout << "Yes" << endl  ;  
        }
        else 
        {
           cout << "No" << endl  ;  
        }
    
    }

}  


