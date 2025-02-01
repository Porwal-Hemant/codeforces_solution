#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int solve(int rows, int columns)
{
    if (rows == 0)
    {
        return 0;
    }
    if (rows == 1)
    {
        return ceil(columns / 2);
    }
    return columns + solve(rows - 2, columns);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;

        cin >> n;

        int m;

        cin >> m;

        int ans = solve(n, m);

        int newAns =  ( n / 2 ) * m + ( n % 2 ) * ceil(double(m)/2) ; 

        cout << newAns << endl;
    }
}

