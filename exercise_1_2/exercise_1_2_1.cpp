#include <iostream>
#include <vector>

int main() {
    // Part 1: Vector Reversal

    // Input vector from command-line
    std::vector<int> list;
    int input = 0;
    std::cout << "Input List Of Numbers (end list with non-integer):" << std::endl;
    while (std::cin >> input) {
        list.push_back(input);
    }

    // Print original vector
    std::cout << "Original Vector: ";
    for (int v : list) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Reverse Vector
    // WRITE YOUR VECTOR REVERSAL HERE
    std::vector<int> newList(list.size());
    for (int i = 0; i < list.size(); i++) {
        newList[i] = list[list.size() - i - 1];
    }

    // Print the Reversed vector
    std::cout << "Reversed Vector: ";
    for (int v : newList) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
}
