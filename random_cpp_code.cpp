#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Print each number in the vector
    std::cout << "Numbers in the vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Calculate the sum of the numbers
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }

    // Print the sum
    std::cout << "Sum of the numbers: " << sum << std::endl;

    return 0;
}
