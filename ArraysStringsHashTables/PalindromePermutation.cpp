#include <iostream>
#include <string>
#include <vector>

// Checks if the string is a permutation of a palindrome
bool isPermutationOfPalindrome(const std::string &strToCheck) {
    // Frequency table
    std::vector<int> frequencyTable;

    for(int i = 0; i < strToCheck.size(); i++) {
        frequencyTable[strToCheck[i]] += 1;
    }

    int lettersWithOnlyFreq1 = 0;
    
    for(int i = 0; i < strToCheck.size(); i++) {
        if(frequencyTable[strToCheck[i]] == 1) {
            ++lettersWithOnlyFreq1;
        }

        if(lettersWithOnlyFreq1 > 1) {
            return false;
        }
    }

    return true;
}

// Conduct tests here
int main() {
    std::cout << "String inputted: raecacr -> " << isPermutationOfPalindrome("raecacr") << std::endl;

    return 0;
}