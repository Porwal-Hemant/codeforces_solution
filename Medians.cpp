#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n; // length of array A
        int k; // desired median of the subArray
        cin >> n >> k;

        if (n == 1)
        {
            cout << 1 << endl;
            cout << 1 << endl;
            continue;
        }

        if (n == 3)
        {
            if (k == 2)
            {
                cout << 3 << endl;
                cout << 1 << " " << 2 << " " << 3 << endl;
                continue;
            }
            else
            {
                cout << -1 << endl;
                continue;
            }
        }

        if ((k == 1 || k == n) && n != 1)
        {
            cout << -1 << endl;
            continue;
        }

        int indexOfK = k - 1;

        int elements_left = indexOfK;

        int elements_right = ((n - 1) - indexOfK);

        if ( ( elements_left % 2 != 0 ) && ( elements_right % 2 != 0 )  )   
        {
            cout << 3 << endl  ;  

            int firstElement = 1 ; 
            int secondElement = k   ; 
            int thirdElement  =  k + 1  ; 
            cout << firstElement << " " << secondElement << " " << thirdElement  <<  endl ;  

        }
        else 
        {
            int firstE = 1 ;   // single element 
            int secondE =  2  ;  
            int thirdE = k ; 
            int fourthE = k + 1  ;  
            int fifthE = n ;   // single element 

            cout << 5 << endl  ;  
            cout << firstE << " " << secondE << " " << thirdE << " " << fourthE << " " << fifthE  << endl ;  
        }
    }
}


