#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n;
    cin >> n; // Input the number of elements

    int x;
    cin >> x;

    vector<int> numbers;

    // n integeres the weight of each child
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        numbers.push_back(p);
    }

    sort(numbers.begin(), numbers.end());

    int firstIndex = 0;
    int secondIndex = numbers.size() - 1;

    int count = 0;   // Each gondola may have one or two children in it

    while (firstIndex <= secondIndex)
    {
        if ((numbers[firstIndex] + numbers[secondIndex]) > x)
        {   // koe chance nahi hai largest vale ko beethado aur count bara do 
            count++;
            secondIndex = secondIndex - 1;
        }

        else
        {
            count++;
            firstIndex = firstIndex + 1;
            secondIndex = secondIndex - 1;            
        }
    }

    cout << count << endl ; 

}

