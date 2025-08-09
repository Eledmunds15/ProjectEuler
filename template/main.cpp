#include <iostream>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    
    auto start = high_resolution_clock::now();

    // Code Here!

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Execution time: " << duration.count() << " microseconds\n";
    return 0;

}
