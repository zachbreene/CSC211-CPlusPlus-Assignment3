#include <iostream>
#include <cmath>

int main()
{
    int x, y, i = 0, j, k, arr1 [100], arr2 [100];
    double dist = 0, temp = 0;
    
    // Reads 2D coordinate pairs into parallel arrays.
    while(std::cin >> x >> y){
        arr1[i] = x;
        arr2[i] = y;
        i++;
    }
    // Nested loops iterate through all point combinations to calculate Euclidean distance.
    for(j = 0; j < i; j++){
        for(k = j + 1; k < i; k++){
            temp = sqrt(pow((arr1[k] - arr1[j]), 2) + pow((arr2[k] - arr2[j]), 2));
            // Updates 'dist' if the newly calculated distance is the largest found so far.
            if(temp > dist){
                dist = temp;
            }
        }
    }
    std::cout << floor(dist) << std::endl; // Prints the largest distance rounded down.
}
