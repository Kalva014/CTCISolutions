#include <iostream>
#include <string>
#include <vector>

// Checks whether string is has all of the same characters as the other
bool isPermutation(const std::string &str1, const std::string &str2) {
    if(str1.size() != str2.size()) {
        return false;
    }

    std::vector<bool> hasChar(128);

    // This is for adding to vector the different 
    for(int i = 0; i < str1.size(); i++) {
        int val = str1[i];
        if(hasChar[val] == false) {
            hasChar[val] = true;
        }
    }

    for(int i = 0; i < str1.size(); i++) {
        int val = str1[i];
        if(hasChar[val] == false) {
            return false;
        }
    }

    return true;
}

// Conduct tests here
int main() {
    std::cout << isPermutation("random", "modnar") << " == true" << std::endl;
    std::cout << isPermutation("poop", "opo") << " == false" << std::endl;
    return 0;
}