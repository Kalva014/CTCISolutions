#include <string>
#include <iostream>

std::string stringCompression(const std::string str) {
    std::string compressedStr = "";
    int cnt;

    for(int i = 0; i < str.size(); i++) {
        cnt++;

        // For if the next letter is not the same as the current letter or at end of string
        if(str.at(i) != str.at(i + 1) || (str.size() - 1) == i) {
            compressedStr.push_back(str.at(i));
            compressedStr.push_back(cnt);
            
            cnt = 0;
        }
    }

    if(str.size() <= compressedStr.size()) {
        return str;
    }
    else {
        return compressedStr;
    }
}

int main() {
    std::string origString = "aaaaabccca";

    std::cout << origString << " -> after compression -> " << stringCompression(origString) << std::endl;
    return 0;
}