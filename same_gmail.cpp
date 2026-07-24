#include <iostream>
#include <string>

std::string ascii(std::string let){
    int i;
    // Standardizes string to uppercase for case-insensitive comparison[cite: 16].
    for(i = 0; i <= let.length() - 1; i++){
        if(let[i] >= 97){
            let[i] = let[i] - 32;
        }
    }
    return let;
}

std::string plus(std::string str){
    int i, length = str.length();
    std::string k;
    bool plus = false;
    
    // Ignores characters between '+' and '@' to handle Gmail aliases[cite: 16].
    for(i = 0; i < length; i++){
        if(str[i] == '+'){
            plus = true;
        }
        else if(str[i] == '@'){
            plus = false;
        }
        if(plus == false){
            k += str[i];
        }
    }
    return k;
}

std::string dots(std::string str){
    int i, length = str.length();
    std::string k;
    // Strips periods out of the string, as Gmail ignores periods in usernames[cite: 16].
    for(i = 0; i < length; i++){
        if(str[i] != '.'){
            k += str[i];
        }
    }
    return k;
}

void whitespace(std::string str, std::string &x, std::string &y){
    int i, length = str.length();
    bool separate = false;
    
    // Splits the input string by the space character to separate the two emails for comparison[cite: 16].
    for(i = 0; i < length; i++){
        if(str[i] == ' '){
            separate = true;
            i++;
        }
        if(separate == false){
            x += str[i];
        }
        else{
            y += str[i]; 
        }
    }
}

int main()
{
    std::string x, y, str;
    std::getline(std::cin, str);
    
    // Applies normalizations to process the emails[cite: 16].
    str = ascii(str);
    str = plus(str);
    str = dots(str);
    whitespace(str, x, y);
    
    if(x == y){
        std::cout << "True" << std::endl; // The emails route to the same inbox[cite: 16].
    }
    else{
        std::cout << "False" << std::endl;
    }
}