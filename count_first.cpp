#include <iostream>

int main()
{
    int first, n, i = 1;
    std::cin >> n; // Reads the first target integer.
    while(std::cin >> first){ // Loops through the remaining integers in the input.
        if(n == first){
            i = i + 1; // Increments the counter if a matching integer is found.
        }
    }
    std::cout << i << std::endl; // Outputs the total count.
}
