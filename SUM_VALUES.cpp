#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int sum;

    cin >> sum;

    vector<int> numbers;

    for (int i = 0; i <= n - 1; i++)
    {

        int x;
        cin >> x;
        numbers.push_back(x);
    }

    map<int, int> freqMap;

    map<int, int> count;

    for (int i = 0; i < n; i++)
    {

        freqMap[numbers[i]] = i + 1;
        count[numbers[i]]++;
    }

    bool checker = false;

    int firstIndex;

    int secondIndex;

    for (int i = 0; i < n; i++)
    {

        int numberSearched = sum - numbers[i];

        if (freqMap[numberSearched] != 0)
        {

            if (numberSearched == numbers[i] && count[numbers[i]] == 1)
            {
                continue;
            }
            else
            {
                checker = true;

                firstIndex = i + 1;

                secondIndex = freqMap[numberSearched];

                break;
            }
        }
    }

    if (checker == true)
    {

        cout << firstIndex << " " << secondIndex;
    }

    else
    {

        cout << "IMPOSSIBLE";
    }
}


