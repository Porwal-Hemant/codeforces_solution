
#include <bits/stdc++.h>
using namespace std; 

#define int long long 
#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{    
    int N, D;  
    cin >> N >> D; 

    vector<int> numbers(N);  

    for (int i = 0; i < N; i++) 
    {
        cin >> numbers[i];   // Read powers of all candidate players
    }

    sort(numbers.begin(), numbers.end(), greater<int>());  // Sort in descending order
    
    int count = 0; 
    int index = 0;  
    int answer = 0;  

    while (count < N && index < N) 
    {    
        int maxi = numbers[index];  
        // cout << "Maxi-> " << maxi << endl; 

        // Corrected element requirement calculation
        int elemReq = ( D / maxi ) + 1  ;  

        // cout << "ElemeReq -> " << elemReq << endl; 

        count += elemReq;  // Update count

        // cout << "count-> " << count << endl;  

        if (count <= N) 
        {
            answer++;  
        }

        // cout << "ANSWER-> " << answer << endl; 
        index++;  
    }

    cout << answer << endl;  
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("D:/CodeForces/input", "r", stdin);
    freopen("D:/CodeForces/output", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std; 

// #define int long long 
// #define ll long long
// #define endl '\n'
// #define debug(x) cout << #x << " = " << x << endl

// void solve() 
// {    

//     int N , D  ;  
//     cin >> N >> D  ; 

//     vector<int>numbers  ;  

//     for( int i = 0 ;  i < N  ;  i++ ) 
//     {
//         int x  ; 
//         cin >> x  ; 
//         numbers.push_back( x ) ;    // powers of all candidate players  
//     }

//     sort( numbers.begin() , numbers.end() , greater<int>() )  ;  
//     int count = 0 ; 
//     int index = 0 ;  
//     int answer = 0 ;  

//     while( count <  N && index < N  ) 
//     {    

//         int maxi = numbers[index] ;  
//         cout << "Maxi-> " << maxi << endl  ; 

//         int elemReq = -1 ;  

//         if( D % maxi == 0 ) 
//         {
//             elemReq = ( (double)D / maxi ) + 1  ;  
//         }
//         else 
//         {
//             elemReq = ceil((double)D / maxi ) ;  
//         }

//         cout << "ElemeReq ->" << elemReq << endl ; 

//         count = count + elemReq  ; 

//         cout << "count->" << count << endl  ;  

//         if( count <= N ) 
//         {
//             answer++ ;  
//         }
//         cout << "ANSWER->" << answer << endl  ; 
//         index++ ;  
//     }

//     cout << answer << endl  ;  

// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("D:/CodeForces/input", "r", stdin);
//     freopen("D:/CodeForces/output", "w", stdout);
// #endif

//     int t = 1;
//     cin >> t;
//     for (int i = 1; i <= t; ++i) {
//         // cout << "Case #" << i << ": ";
//         solve();
//     }

//     return 0;
// }


// /* 

//          if( checker == false ) 
//          {
//               //  maxElement and leftIndex set karna hai 
//               maxElement = numbers[rightIndex] ; 
//               leftIndex = rightIndex  ;  
//               checker == true  ;      
//          }

//          else if(  (checker == true) &&  ( rightIndex )  )

// */