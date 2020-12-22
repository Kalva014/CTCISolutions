#include <iostream>
#include <vector>

// Checks whether string is has all of the same characters as the other
std::string urlify(const std::string &str, const int size) {
    std::string* solution = new std::string();

    for(int i = 0; i < size; i++) {
        if(str.at(i) == ' ') {
            solution->push_back('%');
            solution->push_back('2');
            solution->push_back('0');
        }
        else{
            solution->push_back(str.at(i));
        }
    }

    return *solution;
}

// Conduct tests here
int main() {
    std::string* strToUrlify = new std::string("r a ");
    std::cout << urlify(*strToUrlify, strToUrlify->size()) << " == r%20a%20" << std::endl;
    return 0;
}