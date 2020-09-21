#include <iostream>

int main() {
    // Part 2: Palindrome Check

    // Input string from command-line
    std::string str;
    std::cout << "Enter String:" << std::endl;
    std::cin >> str;

    // Palindrome Check
    // WRITE YOUR PALINDROME CHECK HERE
    bool is_palindrome = true;
    for (int left = 0, right = str.size() - 1; left < right; left++, right--) {
        if (str.at(left) != str.at(right)) {
            is_palindrome = false;
            break;
        }
    }

    std::cout << str << " is " << (is_palindrome ? "" : "NOT ") << "a palindrome";

    return 0;
}
