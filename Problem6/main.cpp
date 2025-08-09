#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

int sumOfSquares(int n) {

    int sum = 0;

    for (int i=1; i<=n; i++) {
        sum += i*i;
    }

    return sum;

}

int squareOfSum(int n) {

    int sum = 0;

    for (int i=1; i<=n; i++) {
        sum += i;
    }

    return sum*sum;

}

int sumSquareDifference() {

    int lim = 100;

    return sumOfSquares(lim)-squareOfSum(lim);

}

int main() {

    auto start = high_resolution_clock::now();

    cout << "The answer is: " << abs(sumSquareDifference()) << "\n";

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Execution time: " << duration.count() << " microseconds\n";
    return 0;

}
