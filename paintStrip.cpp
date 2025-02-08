// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// int32_t main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//           int n ;  

//           cin >> n  ; 

//           if( n == 1 || n == 2 )    
//           {
//              cout << n << endl  ; 
//              continue  ;  
//           }

//           if( n == 3 || n == 4  ) 
//           {
//              cout << 2 << endl   ; 
//              continue ;  
//           }

//           // upper are some simple cases less than equal to 4 

//           // cases when n is greater than 5 
//           int type1 = 2 ; 
//           // definitely i have to put 2 ones at 0th index and at 3rd index

//           int ones = 4 ; 
//           // 0th index , 1st , 2nd , 3rd index ( these all will be one after first itteration )
//           // for n = 5   (  ((0th index , 3rd index will be 1) by using type1 operation ) ,  (( 1st , 2nd index will be 1 ) with the help of type2 operation )  )   
//           // hence total ones = 4 
//           int left = 0  ; 
//           int right = 3 ;  
//           int new_right = -1 ; 
        
//           while( right < n  ) 
//           {
//                // ones + 1 because ( i have to use type1 one at new_right index )
//                new_right =  ( 2 * (ones + 1) ) - 1 + right  ; 
            
//                // after each itteration i am increasing my pool of ones 
//                right = new_right ;  

//                ones = abs(left - right) + 1  ; 

//                type1 = type1 + 1  ;  

//           }

//           cout << type1 << endl   ;  

//     }

// }




#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        long long n;
        cin >> n;

        // Handle simple cases when n <= 4
        if (n == 1 || n == 2) {
            cout << n << endl;
            continue;
        }

        if (n == 3 || n == 4) {
            cout << 2 << endl;
            continue;
        }

        // Cases when n > 4
        long long type1 = 2; // Start with 2 Type 1 operations
        long long ones = 4; // Initially 4 ones after the first iteration
        long long left = 0, right = 3; // Leftmost and rightmost indices

// why in place of ones right should not be there ( because you are thinking that when u have right == n - 1 i should go for that index element to become one but my honour you have already considered that index 1 in order to cover whole segment  )
// for figuring it out take example of n = 10 
// right ttumhara last index ( n -1 ) poocha just stop while loop nahi chalana 
        while ( (right ) < n - 1 ) 
        {
            
            // Calculate the new rightmost index
            right = ( 2 * ( ones + 1 ) ) - 1  ; 

            // Update the number of ones
            ones = right + 1;   // when right at 9 ( 10 ones )

            // Increment the Type 1 operation count
            type1++;
        }

        cout << type1 << endl;
    }

    return 0;
}
