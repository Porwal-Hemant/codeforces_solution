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

    map<int, int> tracker;

    int numbersCount = 0; // this tells me that these much numbers have been removed

    int count = 0;

    int indexRemove = 0;

    while (numbersCount < n)
    {

        count++;

        tracker[indexRemove] = 1;
        numbersCount++;
        int nextTarget = numbers[indexRemove] + 1;

        bool check = false;

        for (int i = indexRemove + 1; i < numbers.size(); i++)
        {

            if (tracker[i] != 1 && numbers[i] == nextTarget)
            {

                tracker[i] = 1;
                nextTarget = nextTarget + 1;
                numbersCount++;
            }
            else if ((tracker[i] != 1 && numbers[i] != nextTarget) && check == false)
            {
                indexRemove = i; // next loop yeaha seah start karenge
                check = true;
            }
        }

        // indexRemove update kar dete hai yeaha
    }

    cout << count;
}


// let us analyse our time complexity ->   worst case mai N^2 time complexity ja sakte hai 


// indexRemove; // isko find karo // isko kahe neeche update karna parega

// iss for loop ko bhi hatna parega TLE maar raha hai

// for (int i = 0; i < numbers.size(); i++)
// {
//     if (tracker[i] != 1)
//     {
//         indexRemove = i ;
//         tracker[i] = 1  ;
//         numbersCount++  ;
//         break ;
//     }
// }

// increasing order mai hee remove karna hai