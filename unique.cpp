#include <iostream>
#include <string>

void unique(std::string str){
    int count = 0, i, j;
    // Iterates through the string to count characters that haven't appeared previously[cite: 15].
    for (i = 0; i < str.length(); i++) {
        bool x = false;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                x = true; // Marks as duplicate if found earlier in the string[cite: 15].
                break;
            }
        }
        if(!x){
            count++; // Increments unique count if the character is appearing for the first time[cite: 15].
        }
    }
    std::cout << count << std::endl;
}

int main()
{
    std::string str;
    std::getline(std::cin, str);
    unique(str);
}