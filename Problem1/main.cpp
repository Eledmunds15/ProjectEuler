#include <iostream>
#include <cmath>

int main() {
    
    std::cout << "Project Euler - Problem 1:\n";

    int input, sum = 0;

    std::cout << "Input: ";
    std::cin >> input;

    for (int i=1; i<input; i++) {

        // std::cout << i << "\n";

        double check1 = (double)i/3, check2 = (double)i/5;

        if (floor(check1)==check1 || floor(check2)==check2) {
            std::cout << "Found number: " << i << "\n";
            sum += i;
        } else {}

    }

    std::cout << "The answer for " << input << " is: " << sum << "\n";

    return 0;
}