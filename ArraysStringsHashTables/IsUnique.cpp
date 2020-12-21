#include <iostream>
#include <string>
#include <vector>

// Checks whether string is unique or not
bool isUnique(const std::string &strToCheck) {
    // Assuming ASCII then total of 128 chars anything over is unicode
    if(strToCheck.size() > 128) {
        return false;
    }
    
    std::vector<bool> charTracker(128);
    for(int i = 0; i < strToCheck.size(); i++) {
        int val = strToCheck[i];
        std::cout << strToCheck[i] << ", " << val << std::endl;
        // This is if the character has already been found earlier in the string
        if(charTracker[val] == true) {
            return false;
        }

        charTracker[val] = true;
    }

    return true;
}

// Conduct tests here
int main() {
    std::vector<std::string> words;
    words.push_back("Works");
    words.push_back("123");
    words.push_back("hello");

    for(int i = 0; i < words.size(); i++) {
        std::cout << "String inputted: " << words[i] << ", bool: " << isUnique(words[i]) << std::endl;
    }

    return 0;
}