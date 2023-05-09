#include <bits/stdc++.h>
using namespace std;

int main() {
    std::vector<int> nums = { 2, 3, 4, 5, 6 };
    int sum = 0;
    int product = 1;
    for (int num : nums) {
        if (num % 2 == 0) {
            sum += num;
        } else {
            product *= num;
        }
    }
    if (sum > 0) {
        std::cout << "Sum of even elements is: " << sum << std::endl;
    } else {
        std::cout << "There are no even elements." << std::endl;
    }
    if (product > 1) {
        std::cout << "Product of odd elements is: " << product << std::endl;
    } else {
        std::cout << "There are no odd elements." << std::endl;
    }
    return 0;
}
