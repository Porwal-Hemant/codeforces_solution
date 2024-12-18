#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{

    int n;

    cin >> n;

    int x ;

    cin >> x ;

    vector<int> numbers;

    for ( int i = 0; i < n  ; i++ )
    {

        int x;
        cin >> x;
        numbers.push_back(x);
    }

    int sum  =   0 ;  

    int count =  0 ; 
     
    map<int , int>freqMap  ;  

    freqMap[0] = 1  ;  

    for( int i =  0  ; i < n ;  i++ ) 
    {
        sum = sum + numbers[i] ;

        int numberToSearched =  sum - x ;  

        if( freqMap[numberToSearched] >= 1  )  
        {
            count = count + freqMap[numberToSearched]  ; 
        }

        freqMap[sum]++ ; 
    }
 

    cout << count ;  

}




