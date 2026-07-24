#include <iostream>

std::string string_len(std::string str) {
    int i = 0;
    // Iterates through the string to convert lowercase letters to uppercase for case-insensitivity[cite: 9].
    for(i = 0; i <= str.length() - 1; i++){
        if(str[i] >= 97){
            str[i] = str[i] - 32; 
        }
    }
    return str;
}

bool palindrome(std::string str){
    int length = str.length();
    // Compares characters from the outside in to check for symmetry[cite: 9].
    for (int i = 0; i < length; i++) {
        if (str[i] != str[(length - 1) - i]) {
            return false; // Returns false immediately if a mismatch is found[cite: 9].
        }
    }
    return true;
}

int main()
{
    std::string word;
    std::getline(std::cin, word);
    word = string_len(word);
    if(palindrome(word)){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }
    return 0;
}