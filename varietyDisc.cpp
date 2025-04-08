#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve() 
{
    int n ; 
    cin >> n  ;  // length of array 

    vector<int>numbers  ; 

    map<int , int>freqMap ;  

    for( int i = 0 ;  i < n ; i++ ) 
    {
        int x ;  
        cin >> x  ; 

        numbers.push_back( x )  ;  
        freqMap[x]++  ;  
    }

    // freqMap debug

    // for( auto it : freqMap ) 
    // {
    //     cout << it.first << "->" << it.second << endl ; 
    // }


    int maxAns =  0   ; 

    int currCount = 0 ;  

    int leftPointer =  -1  ;   // abhi current koe hold hai kya nahi 
    int rightPointer =  -1  ;  // leftPointer jab initiate hai tab ageh barne ka kaam karega 
    
    int finalRightPointer =  -1 ; 
    int finalLeftPointer =  -1  ;  

    for( int i = 0 ;  i < n ; i++ ) 
    {     

        // cout << "Index NO -> "  << i << endl ;  

        if( freqMap[numbers[i]] == 1  ) 
        {   
            // cout << "First LOOP mai aaya hu " << endl  ;  

            currCount++ ;    // single element detected 
            if( leftPointer ==  -1 ) 
            {
                leftPointer = i   ;  
                rightPointer =  i   ; 
            }
            else 
            {
                rightPointer =  i   ; 
            }

            if( currCount > maxAns ) 
            {
                finalRightPointer =  rightPointer ; 
                finalLeftPointer =  leftPointer   ;  
                maxAns =  max( maxAns , currCount ) ; 
            }   

        //    cout << "CurrCount -> " << currCount <<  endl ;  
        //    cout << "maxAns ->"   << maxAns << endl ; 
        //    cout << "leftPointer->" <<  leftPointer  << endl  ;  
        //    cout << "RightPointer->" <<  rightPointer  << endl  ; 
        //    cout << "finalleftPointer->" <<  finalLeftPointer  << endl  ;  
        //    cout << "finalRightPointer->" <<  finalRightPointer  << endl  ;            
        }
        else 
        {   
            // cout << "second LOOP mai aaya hu " << endl  ;              
            if( currCount > maxAns ) 
            {
                finalRightPointer =  rightPointer ; 
                finalLeftPointer =  leftPointer   ;  
                maxAns =  max( maxAns , currCount ) ; 
            }

            currCount = 0  ;  

            leftPointer = -1   ;  
            rightPointer =  -1   ;  
            // cout << "CurrCount -> " << currCount <<  endl ;  
            // cout << "maxAns ->"   << maxAns << endl ;      
            // cout << "finalleftPointer->" <<  finalLeftPointer  << endl  ;  
            // cout << "finalRightPointer->" <<  finalRightPointer  << endl  ;                                  
        }
    }

    if( currCount != 0 ) 
    {
        if( currCount > maxAns ) 
        {
            finalRightPointer =  rightPointer ; 
            finalLeftPointer =  leftPointer   ;  
            maxAns =  max( maxAns , currCount ) ; 
        }         
    }
    
   if( finalLeftPointer == -1 && finalRightPointer == -1  ) 
   {
        cout << "0" << endl ; 
        return ;  
   }


   cout << finalLeftPointer + 1 << " "  <<  finalRightPointer  + 1 << endl  ;   
   // one based indexing 
   // score can't be increased and you have to find the max score possible


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



