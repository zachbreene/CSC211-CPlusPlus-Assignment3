#include <iostream>
#include <string>

std::string dupe(std::string str){
    int i = 0;
    char x = str[0]; // Stores the first character to start comparisons[cite: 12].
    for(i = 1; i < str.length() + 1; i++){
        // If the current character is different from the previous, the previous character is printed[cite: 12].
        if(x != str[i]){
            std::cout << str[i - 1];
        }
        x = str[i];
    }
    return str;
}

int main(){
    std::string str;
    std::getline(std::cin, str);
    dupe(str);
    std::cout << std::endl;
}