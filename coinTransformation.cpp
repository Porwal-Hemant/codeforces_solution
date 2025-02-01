#include <bits/stdc++.h>
#define int long long
using namespace std;

int getMaxCoins( int n ,  unordered_map<int , int>&mapper  )  
{
    if( n <= 3 ) 
    {
        return 1  ; 
    }

    if(  mapper.find(n) != mapper.end() ) 
    {
        return mapper[n] ; 
    }

    return mapper[n] = getMaxCoins(n / 4, mapper) + getMaxCoins(n / 4, mapper);

}

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {
       
        int n ;  
        cin >>  n ;  

        unordered_map<int , int> mapper ; 

        cout << getMaxCoins(n, mapper) << endl;                

    }


}

