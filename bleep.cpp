#include <iostream>
#include <string>
#include "functions.hpp"

int main() {
    std::string word = "broccoli";
    std::string text = "broccoli broccoli broccoli";
    std::cout << "Original text: " << text << "\n";

    bleep(word, text);

    std::cout << "Censored text: " << text << "\n";

    return 0;
}
