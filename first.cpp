// #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// int32_t main()
// {

//     int t;
//     cin >> t;

//     for (int ii = 0; ii < t; ii++)
//     {

//         int n;
//         cin >> n;

//         vector<int> numbers;

//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             numbers.push_back(x);
//         }

//         if (n == 1)
//         {
//             cout << 1 << endl;
//             continue;
//         }

//         if (n % 2 == 0)
//         {

//             int maxDiff = INT_MIN;

//             for (int i = 0; i < n; i = i + 2)
//             {
//                 maxDiff = max(maxDiff, (numbers[i + 1] - numbers[i]));
//             }

//             cout << maxDiff << endl;
//         }

//         else
//         {

//             vector<int> num;

//             for (int i = 0; i < n - 1; i = i + 1)
//             {
//                 int z = numbers[i + 1] - numbers[i];
//                 num.push_back(z);
//             }

//             int numMax = INT_MIN;

//             int numMaxIndex1;
//             int numMaxIndex2;

//             for (int i = 0; i < num.size(); i++)
//             {
//                 if (numMax < num[i])
//                 {
//                     numMax = max(numMax, num[i]);
//                     numMaxIndex1 = i;
//                     numMaxIndex2 = i + 1;
//                 }
//             }

//             int indexToRemove;

//             if (numMaxIndex1 % 2 == 0)
//             {
//                 indexToRemove = numMaxIndex1;
//             }
//             else
//             {
//                 indexToRemove = numMaxIndex2;
//             }

//             numbers.erase(numbers.begin() + indexToRemove);

//             int maxDiff = 0;

//             // ek element jo sabse jyada pareshan kar raha tha usko hatah diya
//             for (int i = 0; i < numbers.size() - 1 ; i = i + 2)
//             {
//                 maxDiff = max( maxDiff, ( numbers[i+1] - numbers[i] ) );
//             }

//             cout << maxDiff << endl;
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

    for (int ii = 0; ii < t; ii++)
    {
        int n;
        cin >> n;

        vector<int> numbers(n);
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        if (n % 2 == 0)
        {
            int maxDiff = LLONG_MIN;
            for (int i = 0; i < n; i += 2)
            {
                maxDiff = max(maxDiff, numbers[i + 1] - numbers[i]);
            }
            cout << maxDiff << endl;
        }
        else
        {
            vector<int> num;
            for (int i = 0; i < n - 1; i++)
            {
                num.push_back(numbers[i + 1] - numbers[i]);
            }

            int numMax = LLONG_MIN, numMaxIndex1 = 0, numMaxIndex2 = 0;
            for (int i = 0; i < num.size(); i++)
            {
                if (num[i] > numMax)
                {
                    numMax = num[i];
                    numMaxIndex1 = i;
                    numMaxIndex2 = i + 1;
                }
            }

            int indexToRemove = (numMaxIndex1 % 2 == 0) ? numMaxIndex1 : numMaxIndex2;
            numbers.erase(numbers.begin() + indexToRemove);

            int maxDiff = LLONG_MIN;
            for (int i = 0; i < numbers.size() - 1; i += 2)
            {
                maxDiff = max(maxDiff, numbers[i + 1] - numbers[i]);
            }

            cout << maxDiff << endl;
        }
    }
}








/*

        vector<int>num  ;

        for( int i = 0 ;  i < n - 1 ; i++ )
        {
            int z = numbers[i+1] - numbers[i] ;
            num.push_back(z) ;
        }

        sort( num.begin() , num.end() , greater<int>() )  ;

        if( num.size() ==  1 )
        {
             cout << num[0] << endl  ;
        }
        else
        {
            cout << num[1] << endl  ;
        }

*/
