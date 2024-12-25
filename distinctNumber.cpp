#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int n;
    cin >> n; // Input the number of elements
    
    unordered_map<int, int> freqMap; // Map to store frequency of each element
    int count = 0; // Variable to count distinct elements

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num; // Input each element
        
        // Check if num is already in the map
        if (freqMap[num] == 0) { // If not found in the map (distinct)
            freqMap[num] = 1; // Set it in the map
            count++; // Increase distinct count
        }
    }

    cout << count << endl; // Output the number of distinct elements
    return 0;
}
