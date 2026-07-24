#include <iostream>

int main()
{
    int n, i = 0;
    std::cin >> n;
    int n2 = n; // Stores the previous number to compare against[cite: 11].
    bool sort = true;
    
    // Reads up to 100 integers and checks if they are sorted in descending order[cite: 11].
    while(std::cin >> n && i < 100){
        if(n <= n2){
            sort = true; // Continues confirming the sequence is sorted descending[cite: 11].
        }
        else if(n > n2){
            sort = false; // Breaks the loop if a number is strictly greater than the previous one[cite: 11].
            break;
        }
        n2 = n;
        i++;
    }
    if(sort == true){
        std::cout << "Sorted" << std::endl;
    }
    else{
        std::cout << "Not Sorted" << std::endl;
    }
}