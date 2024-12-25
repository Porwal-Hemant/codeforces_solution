#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> numbers;

    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;
        numbers.push_back(x);
    }

    long count = 0;

    long long element = numbers[0]; // 3

    for (int i = 1; i < n; i++)
    {

        if (numbers[i] < element)
        {

            count = count + (element - numbers[i]);
            numbers[i] = element; // 3
        }

        element = numbers[i]; // 3
    }

    cout << count;
}
