#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n ;     // length of array 
        int m  ;    // number of operations 
        cin >> n   ;  
        cin >> m   ;  

        vector<int>numbers(n) ; 

        for( int i = 0 ;  i < n  ;  i++ ) 
        {
            cin >> numbers[i] ;  
        }

        int maxElement = *max_element( numbers.begin() , numbers.end() ) ;  

        vector<int>maxElem  ;  
        
        for( int i = 0  ; i < m  ;  i++ ) 
        {
            char ch  ;  
            cin >> ch  ;  

            int l ; 
            cin >> l ;  

            int r ;  
            cin >> r  ;  

            if( maxElement >= l  && maxElement <= r ) 
            {
                if( ch == '+' ) 
                {
                     maxElement  = maxElement + 1  ;  
                }
                else 
                {
                    maxElement = maxElement - 1  ;   
                }
            }


            maxElem.push_back(maxElement)   ;  
        }
        
        for( auto it : maxElem ) 
        {
            cout << it << " "  ;  
        }
        
        cout << endl  ;  
    }

}


