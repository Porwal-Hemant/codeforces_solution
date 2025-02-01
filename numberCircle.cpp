#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void printVec(vector<int> &ans)
{
    for (int i = 0 ;  i < ans.size() ; i++ )
    { 
        cout << ans[i] << " ";
    }
}

int main()
{
    int n;

    cin >> n;

    vector<int> numbers;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        numbers.push_back(x);
    }

    sort(numbers.begin(), numbers.end());

    int maxAllow = 0;

    vector<int> ans;

    if (n == 3)
    {
        if (numbers[0] + numbers[1] > numbers[2])
        {
            cout << "YES" << endl;
            ans.push_back(numbers[0]);
            ans.push_back(numbers[1]);
            ans.push_back(numbers[2]);

            printVec(ans);
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    else
    {
        int firstIndex = 0;

        int rightTrack;
        int leftTrack;

        int secondIndex = n - 2;

        while ((firstIndex + 2) <= secondIndex)
        {
            if (((numbers[firstIndex] + numbers[secondIndex]) - 1) > maxAllow)
            {

                leftTrack = firstIndex;
                rightTrack = firstIndex + 2;
                maxAllow = max(maxAllow, ((numbers[firstIndex] + numbers[secondIndex]) - 1));

            }

            firstIndex = firstIndex + 1;
        }

        if (maxAllow >= numbers[n - 1])
        {
            cout << "YES" << endl;

            swap(numbers[leftTrack+1] , numbers[n - 1] ) ;  

            printVec(numbers) ;  
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
