#include <iostream>
#include <string>

int main()
{
    int i = 0, x[100], sum = 0;
    std::string str;
    std::getline(std::cin, str);
    
    // Initializes the integer array to zeroes[cite: 13].
    for(i = 0; i < 100; i++){
        x[i] = 0;
    }
    // Calculates a simple hash by summing the ASCII values of the string's characters[cite: 13].
    for(i = 0; i < str.length(); i++){
        x[str[i]];
        sum += (int)str[i];
    }
    std::cout << sum << std::endl;
}