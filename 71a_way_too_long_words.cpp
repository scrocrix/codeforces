#include "iostream"

std::string parse(std::string word, int maxCharacters = 10) {
    if (word.length() <= maxCharacters) {
        return word;
    }
    std::string firstLetter;
    std::string lastLetter;
    for (int i = 0; i <= word.length(); i++) {
        if (i == 0) {
            firstLetter = word[i];
        }
        if (i == word.length()) {
            lastLetter = word[i-1];
        }
    }
    return firstLetter + std::to_string(word.length() - 2) + lastLetter;
}

int main() {
    int wordCount;
    std::cin >> wordCount;
    int currentWord = 0;
    std::string words[wordCount];
    while(currentWord <= wordCount - 1) {
        if (currentWord > wordCount) {
            break;
        }
        std::string word;
        std::cin >> word;
        std::string nword = parse(word);
        currentWord++;
        words->append(nword + "\n");
    }
    std::cout << words->c_str();
}