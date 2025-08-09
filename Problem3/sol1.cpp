#include <iostream>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

long long findLargestPrimeFactor(long long n) {
    long long lastFactor = 1;

    // Remove all factors of 2
    if (n % 2 == 0) {
        lastFactor = 2;
        while (n % 2 == 0) {
            n /= 2;
        }
    }

    long long factor = 3;
    long long maxFactor = sqrt(n);

    while (n > 1 && factor <= maxFactor) {
        if (n % factor == 0) {
            n /= factor;
            lastFactor = factor;

            while (n % factor == 0) {
                n /= factor;
            }

            maxFactor = sqrt(n);
        }
        factor += 2; // Only odd factors
    }

    // If remainder n is > 1, it is prime and the largest factor
    if (n == 1)
        return lastFactor;
    else
        return n;
}

int main() {

    long long n;

    cout << "Input: ";
    cin >> n;

    auto start = high_resolution_clock::now();\

    cout << "The answer is: " << findLargestPrimeFactor(n) << "\n";

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Execution time: " << duration.count() << " microseconds\n";
    return 0;

}
