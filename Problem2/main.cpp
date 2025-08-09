#include <iostream>
#include <cmath>

int main() {

    std::cout << "Project Euler - Problem 1:\n";

    int input = 0;

    std::cout << "Input: ";
    std::cin >> input;

    int sum = 0, a = 1, b = 2;

    while (a < input) {

        if (a % 2 == 0) {
            sum += a;
        }

        int next = a + b;

        a = b;
        b = next;
    
    }

    std::cout << "The answer for " << input << " is: " << sum << "\n";

    return 0;
}