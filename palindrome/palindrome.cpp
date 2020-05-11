#include <iostream>


bool isPalindrome(const std::string text) {
    for (int i=0; i < text.length(); i++) {
        if (text[i] != text[text.length()-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string text;
    std::cout << "Write your text to check: ";
    std::cin >> text;
    bool value = isPalindrome(text);
    if (value) {
        std::cout << "Is a palindrome";
    }
    else {
        std::cout << "Is not a palindrome";
    }
}


