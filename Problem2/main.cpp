#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "Project Euler - Problem 1:\n";

    int input = 0;

    cout << "Input: ";
    cin >> input;

    int sum = 0, a = 1, b = 2;

    while (a < input) {

        if (a % 2 == 0) {
            sum += a;
        }

        int next = a + b;

        a = b;
        b = next;
    
    }

    cout << "The answer for " << input << " is: " << sum << "\n";

    return 0;
}