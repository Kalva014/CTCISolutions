#include <iostream>
#include <string>
#include <stdlib.h>

// Returns true if the strings have an edit distance between the two
bool oneAway(const std::string str1, const std::string str2) {
    if(str1 != str2) {
        // Remove and insert
        if(str1.size() != str2.size()) {
            if(abs(str1.size() - str2.size()) > 1) {
                return false;
            }
        }
        
        // Replace character
        if(str1 != str2) {
            std::string smallerStr;
            int numOfDiffCharacters = 0;

            if(str1.size() > str2.size()) {
                smallerStr = str2;
            }
            else {
                smallerStr = str1;
            }

            for(int i = 0; i < smallerStr.size(); i++) {
                if(str1.at(i) != str2.at(i)) {
                    ++numOfDiffCharacters;
                }
            }

            if(numOfDiffCharacters > 1) {
                return false;
            }
            
            return true;
        }
    }
    else {
        return true;
    }
}

int main() {
    std::cout << "Testing \'pale\' and \'ple\' which returns -> " << oneAway("pale", "ple") << std::endl;
    return 0;
}