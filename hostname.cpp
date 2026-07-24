#include <iostream>
#include <string>

std::string ascii(std::string &str){
    int i;
    // Standardizes the URL string to lowercase.
    for(i = 0; i <= str.length() - 1; i++){
        if(str[i] <= 90 && str[i] >= 65){
            str[i] = str[i] + 32;
        }
    }
    return str;
}

std::string hostname(std::string &str){
    std::string hoststr;
    int i = 0, length = str.length();
    
    // Iterates until the protocol specifier "//" is passed.
    for(i; i < length; i++){
        if(str[i] == '/'){
            i = i + 2;
            break;
        }
    }
    
    // Copies the characters to construct the hostname until a port colon or trailing slash is hit.
    for(i; i < length; i++){
        if(str[i] == '/' || str[i] == ':'){
            return hoststr;
        }
        hoststr += str[i];
    }
    return hoststr;
}

int main()
{
    int arr[100];
    std::string str;
    std::getline(std::cin, str);
    str = ascii(str);
    str = hostname(str); // Extracts and stores the hostname.
    
    std::cout << str << std::endl;
}
