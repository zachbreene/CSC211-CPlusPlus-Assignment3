#include <iostream>
#include <string>

void reverse(std::string &str)
{
    int len = str.length();
    int last = len;
    len -= 1;
    // Reverses the string in-place by swapping characters from the ends towards the center.
    for(int i = 0; i < last/2; i++){
        std::swap(str[i], str[len]);
        len -= 1;
    }
}

int main()
{
    std::string str;
    std::getline(std::cin, str);
    reverse(str); // Modifies the original string directly via reference.
    std::cout << str << std::endl;
}
