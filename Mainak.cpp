#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define debug(x) cout << #x << " = " << x << endl

void solve()
{
    int n;
    cin >> n;

    vector<int> numbers(n);
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        // mini = min(mini, numbers[i]);
    }
    int smallest = numbers[0];
    for (int i = 1 ; i < n ; i++)
    {
        maxi = max(maxi, numbers[i]);
        // mini = min(mini, numbers[i]);
    }

    if (n == 1)
    {
        cout << "0" << endl;
        return;
    }

    int ans1 = maxi - smallest;

    int largest = numbers[n - 1];

    int mini = INT_MAX  ; 

    for (int i = 0; i < n - 1; i++)
    { 
         mini = min( mini ,  numbers[i]  )    ; 
    }

    int ans2 = largest - mini ;  

    int ans = max( ans1 , ans2 ) ;  
    
    int ans3 =  numbers[n-1] - numbers[0] ;   

    for( int i = 0  ; i < n -1 ;  i++ ) 
    {
        ans3 =  max( ans3 ,numbers[i] - numbers[i+1]  )  ;  
    }

    cout << max( ans , ans3 ) << endl ;  

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("D:/CodeForces/input", "r", stdin);
    freopen("D:/CodeForces/output", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}



