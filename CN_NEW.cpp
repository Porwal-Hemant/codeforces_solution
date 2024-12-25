#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    vector<int> numbers;

    for (int i = 0; i <= n - 1; i++)
    {

        int x;
        cin >> x;
        numbers.push_back(x);
    }

    map<int, int> indexNumbersMap;

    vector<int> locations;

    for (int i = 0; i < n; i++)
    {
        indexNumbersMap[numbers[i]] = i + 1; // storing 1-based index
    }

    int count = 1; // 1 par toh chayega hee

    for (int i = 1; i <= n; i++)
    {
        locations.push_back(indexNumbersMap[i]);
    }

    int mini = locations[0];

    for (int i = 1; i < locations.size(); i++)
    {
        if (locations[i] < mini)
        {

            count++;
            // isko vapas pick karne ke liye aana parega
        }
        mini = locations[i];
    }

    cout << count;
}
