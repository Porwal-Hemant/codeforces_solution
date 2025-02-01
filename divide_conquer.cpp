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
        cin >> n;

        vector<int> numbers(n);
        int oddElements = 0;

        vector<int> oddNumbers;
        vector<int>evenNumbers ;  

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
            if (numbers[i] % 2 != 0)
            {
                oddElements++;
                oddNumbers.push_back(numbers[i]);
            }
            else 
            {
                evenNumbers.push_back(numbers[i] ) ;  
            }
        }

        int evenElements =  (n - oddElements)  ; 

        if (oddElements % 2 == 0)
        {
            cout << "0" << endl;
            continue;
        }

        // iske baad hamara sabse bara goal ke number of odd elements ka count change kiya jaaye 
        // even ko odd elements mai change kar do 
        // odd ko even eleemnts mai change kar do 

        int ans = INT_MAX;

        for (int i = 0; i < oddNumbers.size() ; i++)
        {
            int number = oddNumbers[i];

            int count = 0;

            while ( number >  0  && ( number % 2 ) != 0 )
            {
                number = number / 2;
                count++;
            }

            ans = min(ans, count);
        }

        int ans1 = INT_MAX ;   

        for( int i = 0  ;  i < evenNumbers.size() ;  i++   ) 
        {
             int number = evenNumbers[i] ; 
             int count = 0 ;  

             while( number > 0  && ( number % 2) == 0 ) 
             {
                   number =  number / 2  ;  
                   count++ ;  
             }

             ans1 = min( ans1 , count ) ;  
        }

        cout << min(ans,ans1) << endl;
    }
}

