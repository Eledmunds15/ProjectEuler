#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace std::chrono;

bool checkPalindrome(long long n) {

    string s = to_string(n);
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());

    return s == rev_s;

}

long long findPalindromeProduct() {

    long long palindrome = -1;

    for (int i=999; i>=100; i--) {

        for (int j=999; j>=100; j--) {

            long long number = i*j;

            // cout << "Checking: " << number << "\n";
            if (checkPalindrome(number) && number > palindrome) palindrome = number; 

        }

    }

    return palindrome;

}

int main() {
    
    int input;

    auto start = high_resolution_clock::now();

    cout << "The answer is: " << findPalindromeProduct() << "\n";

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Execution time: " << duration.count() << " microseconds\n";
    return 0;

}
