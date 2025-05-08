#include "functions.hpp"
#include <vector>
#include <sstream>
#include <string>

void bleep(const std::string& word, std::string& text) {
    // Split the text into words
    std::istringstream iss(text);
    std::vector<std::string> words;
    std::string current_word;
    
    while (iss >> current_word) {
        words.push_back(current_word);
    }

    // Process each word
    for (std::string& w : words) {
        if (w == word) {
            w = std::string(word.length(), '*');
        }
    }

    // Rebuild the text
    text.clear();
    for (size_t i = 0; i < words.size(); ++i) {
        if (i != 0) text += " ";
        text += words[i];
    }
}
