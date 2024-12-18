#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string dna;
    cin >> dna;  // Input the DNA sequence

    int maxLength = 1;  // Maximum length of repetition found
    int currentLength = 1;  // Current length of repetition

    for (int i = 1; i < dna.length(); i++) {
        if (dna[i] == dna[i - 1]) {
            currentLength++;  // Increment count if the same character is found
        } else {
            maxLength = max(maxLength, currentLength);  // Update maxLength
            currentLength = 1;  // Reset currentLength for the new character
        }
    }

    // Final check in case the longest repetition ends at the last character
    maxLength = max(maxLength, currentLength);

    cout << maxLength << endl;  // Output the result
    return 0;
}



