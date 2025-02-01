#include<bits/stdc++.h>
#include <algorithm> 
using namespace std  ;  

int main() 
{
    int t ;  
    cin >> t ; 

    for( int i = 0  ;  i < t ;  i++ ) 
    {
        int n ;  
        cin >> n ; 

        int k  ; 
        cin >> k ;   

        vector<int>numbers ;  

        for( int j = 0 ;  j < n ;  j++ ) 
        {  

            int x ;  
            cin >> x  ;  

            numbers.push_back(x) ; 

        }

        if( k == 1 && !(is_sorted(numbers.begin(), numbers.end())) ) 
        {
              cout << "No" << endl ;  
        }
        else 
        {
              cout << "Yes" << endl  ; 
        }
    }
}

