#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    cout << "Project Euler - Problem 1:\n";

    int input, sum = 0;

    cout << "Input: ";
    cin >> input;

    for (int i=1; i<input; i++) {

        // cout << i << "\n";

        double check1 = (double)i/3, check2 = (double)i/5;

        if (floor(check1)==check1 || floor(check2)==check2) {
            cout << "Found number: " << i << "\n";
            sum += i;
        } else {}

    }

    cout << "The answer for " << input << " is: " << sum << "\n";

    return 0;
}