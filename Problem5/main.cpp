#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

bool checkForMultiples(int n) {

    int limLow = 1, limHigh = 20;

    for (int i=limLow; i<=limHigh; i++) {

        if (n%i != 0) return false;

    }

    return true;

}

int findSmallestMultiple() {

    int smallestMultiple = 1;
    bool multipleFound = false;

    while (!multipleFound) {

        if (checkForMultiples(smallestMultiple)) return smallestMultiple;
        smallestMultiple++;

    }

    return -1;
    
}


int main() {

    auto start = high_resolution_clock::now();

    cout << "The answer is: " << findSmallestMultiple() << "\n";

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Execution time: " << duration.count() << " microseconds\n";
    return 0;

}
