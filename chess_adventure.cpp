// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// int32_t main()
// {

//     int t;
//     cin >> t;

//     while (t--)
//     {

//         int n;
//         int a;
//         int b;

//         cin >> n >> a >> b;

//         string s;

//         cin >> s;

//         int northCount = 0;
//         int eastCount = 0;

//         bool checker = false;

//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == 'N')
//             {
//                 northCount++;
//             }
//             else if (s[i] == 'S')
//             {
//                 northCount--;
//             }
//             else if (s[i] == 'E')
//             {
//                 eastCount++;
//             }
//             else
//             {
//                 eastCount--;
//             }

//             if( northCount == b && eastCount == a )  
//             {
//                 checker = true ;  
//                 break  ;   // ek bar string ko itterate karne ke baad hee pooch gaya 
//             }
//         }

//         if( checker == true ) 
//         {
//             cout << "YES" << endl   ;    // phele itteration mai hee mil gaya 
//             continue ;                   // new test case 
//         }
        
//         // string ko some fixed number of times itterate karenge iske baad equal ho jayenge 
        
//         if( northCount  == 0 || eastCount == 0   ) 
//         {
//             // tum ek kadam bhi aageh nahi pooch pa rahe 

//             cout << "NO" << endl  ;  
//             continue ;    
//             // cout new test case 

//         }

//      // north and east update ho gaye honge 
        
//         int newE = 0 ;  
//         int newN = 0 ;  
        
//         for( int i = 0 ;  i < n ;  i++  ) 
//         {
//             if (s[i] == 'N')
//             {
//                 newN++;
//             }
//             else if (s[i] == 'S')
//             {
//                 newN--;
//             }
//             else if (s[i] == 'E')
//             {
//                 newE++;
//             }
//             else
//             {
//                 newE--;
//             }   
// // a aur b   and  current coordinates string ko some fixed time itterate karne par pooch sakte hai toh checker ko true kar sakte hai 
//             if( (a - newE) % eastCount == 0  &&  (b - newN) % northCount == 0  )    
//             {
//                  if(  (a - newE) / eastCount == (b - newN) / northCount  )  
//                  {
//                      checker = true ;  
//                      break ;  
//                  }
//             }      
//         }

//         if (checker == true)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
// }



#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        int a;
        int b;

        cin >> n >> a >> b;

        string s;

        cin >> s;

        int x = 0 ;  
        int y = 0 ; 

        bool checker = false ;  

        for( int i = 0;  i <= 20*n ;  i++ ) 
        {
            if( x == a && y == b ) 
            {
                 checker = true ;  
                 break ;      
            }
            if (s[i%n] == 'N')
            {
                y++;
            }
            else if (s[i%n] == 'S')
            {
                y--;
            }
            else if (s[i%n] == 'E')
            {
                x++;
            }
            else
            {
                x--;
            }  

        }

        if( checker ==  true ) 
        {
            cout << "YES" << endl  ;  
        }
        else 
        {
            cout << "NO" << endl  ; 
        }

    }

}


