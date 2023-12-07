#include <iostream>
#include <limits>

const int maxSize = 100;

void displayArray(const int arr[], int size) {
    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void insertElement(int arr[], int& size) {
    int element, position;

    std::cout << "Enter the element to insert: ";
    while (!(std::cin >> element)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Enter an integer: ";
    }

    std::cout << "Enter the position to insert (0-indexed): ";
    while (!(std::cin >> position)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Enter an integer: ";
    }

    if (position < 0 || position > size) {
        std::cout << "Invalid position for insertion. Must be between 0 and " << size << "." << std::endl;
    } else if (size < maxSize) {
        for (int i = size - 1; i >= position; --i) {
            arr[i + 1] = arr[i];
        }
        arr[position] = element;
        size++;

        std::cout << "Array elements after insertion: ";
        displayArray(arr, size);
    } else {
        std::cout << "Array is full. Cannot insert more elements." << std::endl;
    }
}

int main() {
    int arr[maxSize];
    int size = 0;

    // Display the initial array
    displayArray(arr, size);

    // Insertion
    insertElement(arr, size);

    return 0;
}
