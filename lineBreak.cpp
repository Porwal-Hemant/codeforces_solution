#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int m; // first strip can hold m characters
        cin >> m;

        vector<string> words(n);

        vector<int>lengths ;   

        for (int i = 0; i < n; i++)
        {
            cin >> words[i];
            lengths.push_back( words[i].size() )  ; 
        }

        int count = 0 ;  

        int totalAlpha = 0 ;  

        for( int i = 0 ;  i < lengths.size() ; i++ ) 
        {
            if( totalAlpha + lengths[i] <= m ) 
            {
                count = count + 1  ;  
                totalAlpha = totalAlpha  +  lengths[i]   ; 
            }
            else 
            {
                break  ;  
            }
        }

        cout  <<  count << endl  ;  

        
    }
}

