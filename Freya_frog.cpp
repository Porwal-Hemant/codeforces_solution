#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
         
       int x ;  
       int y ; 
       int k ; 

       cin >> x >> y >> k   ;   

       int x_steps = 0 ;  

       int y_steps = 0 ;  


    x_steps  =   x / k   ;  

    y_steps = y / k   ;  

       if( x % k != 0 ) 
       {
          x_steps++ ;   // IN ORDER TO INCLUDE LAST STEP
       }
       if( y % k != 0 ) 
       {
           y_steps++ ;   // IN ORDER TO INCLUDE LAST STEP 
       }
 
       int answer ; 
       // debugging 
    //    cout  << x_steps << " " << y_steps << endl  ;  

       if( x_steps <= y_steps ) 
       {
             answer = (  ( 2 * ( x_steps ) ) + (  2 * ( y_steps - x_steps )   )   ) ; 
       }
       else if( x_steps > y_steps ) 
       {
            answer =  ( 2 * ( y_steps ) + 1 + ( 2 * ( abs(  x_steps  -  y_steps ) - 1 ) ) ) ; 
       }     

       cout << answer << endl  ;  

    }

}

      