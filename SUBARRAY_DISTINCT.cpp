#include <bits/stdc++.h>
#include <string>
#define int long long
using namespace std;

int32_t main()
{

    int n;

    int k;

    cin >> n;

    cin >> k;

    vector<int> numbers;

    for (int i = 0; i <= n - 1; i++)
    {

        int x;
        cin >> x;
        numbers.push_back(x);
    }

    map<int, int> freqMap;

    set<int> s; //  will store track of the distinct elements

    int firstIndex = 0;

    int secondIndex = 0;

    // secondIndex = secondIndex + 1;

    int count = 0;

    while (secondIndex < n)
    {

        freqMap[numbers[secondIndex]]++;

        s.insert(numbers[secondIndex]);

        while (s.size() > k)
        {

            // count = count + (secondIndex - firstIndex);

            freqMap[numbers[firstIndex]]--;

            if (freqMap[numbers[firstIndex]] == 0)
            {
                s.erase(numbers[firstIndex]);
            }

            firstIndex = firstIndex + 1;
        }
        count += (secondIndex - firstIndex + 1);
        // jab mera yeah vala subarray possible hai mai iske saare possible subarray include karna chaunga jo inn do index ke beech seah bana sakte hai 
        // while loop firstIndex ko vaha par lekar aajayga jaha seah set atmost vale condition satisfy kar raha hoga useah ( secondIndex + 1 - firstIndex ) seah itne subarrays bana sakta hu 
        secondIndex = secondIndex + 1;
    }

    cout << count;

}


// guys samjhao ke ho kya raha hai 
// ke jab mera firstIndex aur secondIndex hai kahe point kara raha hai and set mai atmost k elemnts vale condition satisfy kar rahe hai tak ( secondIndex + 1 - firstIndex ) jitne subarray ban sakte hai ab next line paro 
// jab yeah condition follow nahi ho rahe tab while loop firstIndex ko vaha le jayga jaha seah   