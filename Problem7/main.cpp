#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

bool isPrimeNo(int n) {

    if (n<2) return false;
    if (n == 2) return true;
    if (n%2 == 0) return false;

    for (int i=3; i<=sqrt(n); i+=2) {
        if (n%i == 0) return false;
    }

    return true;

}

int findPrimeNo() {
    int primeCount = 1;
    int i = 3;

    while (primeCount < 10001) {
        if (isPrimeNo(i)) primeCount++;
        i += 2;
    }

    return i - 2;
}

int main() {

    auto start = high_resolution_clock::now();

    cout << "The answer is: " << findPrimeNo() << "\n";

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Execution time: " << duration.count() << " microseconds\n";
    return 0;

}